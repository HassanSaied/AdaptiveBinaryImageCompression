#include <Algorithms/BTWRLEdecoder.hpp>
#include <Utils/FileHandler.hpp>

BWTRLEdecoder::BWTRLEdecoder(const BinaryStream &pBinaryStream):BinaryImageDecompressor(pBinaryStream){

}

void BWTRLEdecoder::decodeImageDimensions(){
    mBinaryStreamIndex = 0;
    mDecodedBinaryImageRows = FileHandler::readeIntFromBinaryStream(mBinaryStream, mBinaryStreamIndex);
    mDecodedBinaryImageCols = FileHandler::readeIntFromBinaryStream(mBinaryStream,mBinaryStreamIndex);
    mDecodedBinaryImage.create(mDecodedBinaryImageRows,mDecodedBinaryImageCols);
    for(int i=0; i<mDecodedBinaryImageRows; ++i){
        for(int j=0; j<mDecodedBinaryImageCols; ++j){
            mDecodedBinaryImage(i,j) = true;
        }
    }
}

void BWTRLEdecoder::decodeCroppedRows(){
    int firstBlackPixel;
    int croppedRowLength;
    for(int i=0; i<mDecodedBinaryImageRows; ++i){
        if(mBinaryStream[mBinaryStreamIndex++]){
            firstBlackPixel = FileHandler::readeIntFromBinaryStream(mBinaryStream, mBinaryStreamIndex);
            croppedRowLength = FileHandler::readeIntFromBinaryStream(mBinaryStream, mBinaryStreamIndex);
            mCroppedRows.push_back(std::make_pair(i,
                 std::make_pair(firstBlackPixel, firstBlackPixel+croppedRowLength)));
        }
    }
}

void BWTRLEdecoder::decodeTransformation(){
    std::list< byte > currentRow;
    for(std::list< std::pair< int, std::pair<int, int> > >::iterator it = mCroppedRows.begin();
            it!=mCroppedRows.end(); ++it){
        for(int i=0; i<it->second.second - it->second.first +4; ++i){
            currentRow.push_back(FileHandler::readeByteFromBinaryStream(mBinaryStream, mBinaryStreamIndex));
        }
        mCroppedRowsInRLE.push_back(currentRow);
    }
}

std::pair< int, std::vector < bool > > BWTRLEdecoder::decodeRLE(std::list< byte > pCroppedRowInRLE){
    bool color;
    std::list < bool > croppedRowInBitsList;
    color = false;
    int position = 0;
    byte* positionInbytes = new byte[4];
    std::list< byte >::iterator rowIt = pCroppedRowInRLE.begin();

    for(int i=0; i<4; ++i){
        positionInbytes[i] = *rowIt;
        ++rowIt;
    }
    position = (position << 8) + positionInbytes[3];
    position = (position << 8) + positionInbytes[2];
    position = (position << 8) + positionInbytes[1];
    position = (position << 8) + positionInbytes[0];

    while(rowIt!=pCroppedRowInRLE.end()){
        for(byte bitIt = 0; bitIt<*rowIt; ++bitIt){
            croppedRowInBitsList.push_back(color);
        }
        color = !color;
        ++rowIt;
    }

    std::pair< int, std::vector < bool > > croppedRowInBitsVector = std::make_pair(position,croppedRowInBitsList.size());
    int index = 0;
    for(std::list< bool >::iterator rowIt = croppedRowInBitsList.begin();
        rowIt!=croppedRowInBitsList.end(); ++rowIt){
        croppedRowInBitsVector.second[index++] = *rowIt;
    }
    return croppedRowInBitsVector;
}

std::vector < bool > BWTRLEdecoder::reverseBWT(std::pair< int, std::vector < bool > > pTransformStringData){
    std::vector < std::list< bool > > reversedBWT(pTransformStringData.second.size());
    std::vector < std::list< bool > >::iterator reverseBWTIterator;
    for(int i=0; i<pTransformStringData.second.size(); ++i){
        reverseBWTIterator = reversedBWT.begin();
        for(std::vector < bool >::iterator it = pTransformStringData.second.begin();
                it!=pTransformStringData.second.end(); ++it){
            reverseBWTIterator->push_front(*it?true:false);
            ++reverseBWTIterator;
        }
    }

    std::vector< bool > result(pTransformStringData.second.size());
    int index = 0;
    reverseBWTIterator = reversedBWT.begin() + pTransformStringData.first-1;
    for(std::list< bool >::iterator rowIt = reverseBWTIterator->begin();
            rowIt!=reverseBWTIterator->end(); ++rowIt){
        result[index++] = *rowIt;
    }
    return result;
}

/*std::vector<bool> BWTRLEdecoder::getCroppedRowString(const std::list<std::pair<int, std::pair<int, int> > >::iterator &row)
{
    // get cropped row between first and last pixels
    std::vector<bool> croppedRowString(row->second.second-row->second.first);
    int index = 0;
    for(int i= row->second.first; i<=row->second.second; ++i){
        croppedRowString[index++] = binaryImage(row->first,i);
    }
    return croppedRowString;
}*/

BinaryImage BWTRLEdecoder::decode(){
    decodeImageDimensions();
    decodeCroppedRows();
    decodeTransformation();
    std::list< std::pair< int, std::pair<int, int> > >::iterator croppedRowIt = mCroppedRows.begin();
    std::list< std::list< byte > >::iterator croppedRowsInRLEIt = mCroppedRowsInRLE.begin();
    for(int i =0; i<mDecodedBinaryImageRows; ++i){
        if(i == croppedRowIt->first){
            std::list< byte > croppedRowInRLE = *croppedRowsInRLEIt;
            std::pair< int, std::vector < bool > > transformStringData = decodeRLE(croppedRowInRLE);
            std::vector< bool > row = reverseBWT(transformStringData);
            for(int j =0; j<row.size(); ++j){
                mDecodedBinaryImage(i,croppedRowIt->second.first) = row[j];
            }
            ++croppedRowIt;
            ++croppedRowsInRLEIt;
        }
    }

}
