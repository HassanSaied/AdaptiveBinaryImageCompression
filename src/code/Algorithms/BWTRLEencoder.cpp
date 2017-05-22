#include <Algorithms/BWTRLEencoder.hpp>
#include <Utils/FileHandler.hpp>

void BWTRLEencoder::getCroppedRows()
{
    // traverse row by row
    for(int i=0; i<binaryImage.rows; ++i){
        int j = 0;
        int first = -1;
        // get first black pixel
        while(j<binaryImage.cols){
            if(!binaryImage(i,j)){
                first = j;
                break;
            }
            ++j;
        }
        // check row is white
        if(first!=-1){
            // get last black pixel
            int last = binaryImage.cols-1;
            while(last>=first){
                if(!binaryImage(i,last)){
                    break;
                }
                --last;
            }
            // add new cropped row
            croppedRows.push_back(std::make_pair(i,std::make_pair(first,last)));
        }
    }

}

std::vector<bool> BWTRLEencoder::getCroppedRowString(const std::list<std::pair<int, std::pair<int, int> > >::iterator &row)
{
    // get cropped row between first and last pixels
    std::vector<bool> croppedRowString(row->second.second-row->second.first);
    int index = 0;
    for(int i= row->second.first; i<=row->second.second; ++i){
        croppedRowString[index++] = binaryImage(row->first,i);
    }
    return croppedRowString;
}


std::pair< int,std::vector< bool > > BWTRLEencoder::getBWTResult(const std::vector<bool>& rowToTransform)
{
    std::vector< std::pair< std::vector < bool >, bool > > transformation;
    unsigned long size = rowToTransform.size();
    transformation.resize(size);
    int colIndex;
    transformation[0].first = rowToTransform;
    transformation[0].second = true;
    for(int rowIndex = 1; rowIndex < size; ++rowIndex){
        colIndex = 0;
        transformation[rowIndex].first.resize(size);
       for(int i = rowIndex; i<size; ++i){
            transformation[rowIndex].first[colIndex++] = transformation[rowIndex-1].first[i];
        }
        for(int i = 0; i<rowIndex;++i){
            transformation[rowIndex].first[colIndex++] = transformation[rowIndex-1].first[i];
        }
    }
    std::pair< int,std::vector< bool > > result;
    try {
        result.second.resize(size);
    }
    catch(std::bad_alloc &ex){
        // TODO: Handle too much black pixels
        throw std::runtime_error("Too much black pixels; can't store BTW result");
    }
    std::sort(transformation.begin(),transformation.end());
    for(int i = 0; i<transformation.size(); ++i){
        result.second[i] = transformation[i].first[rowToTransform.size()-1];
        if(transformation[i].second){
            result.first = i;
        }
    }
    return  result;
}

void BWTRLEencoder::RLE(const std::pair<int, std::vector< bool > >& rowToEncode)
{
    std::list<byte> encodedRow;
    bool color = false;
    byte accumulator = 0;
    for(int i = 0; i<rowToEncode.second.size(); ++i){
        if(rowToEncode.second[i] == color){
            ++accumulator;
        }
        else{
            encodedRow.push_back(accumulator);
            accumulator = 1;
            color = !color;
        }
    }
    /// TODO: Clean this, just ugly
    byte* position = new byte[4];
    for (int i = 0; i < 4; i++) {
        position[3 - i] = (rowToEncode.first >> (i * 8));
    }
    for(int i =0; i<sizeof(rowToEncode.first);++i) {
        encodedRow.push_front(position[i]);
    }
    encodedRows.push_back(encodedRow);
    transformationBinaryStreamLength+=encodedRow.size()*8*sizeof(byte) + sizeof(int);
}

void BWTRLEencoder::encodeTheImage()
{
    std::list< std::pair< int, std::pair<int, int> > >::iterator croppedRow = croppedRows.begin();
    std::list< int > stream;
    unsigned long streamSize = 0;
    for(int r = 0; r<binaryImage.rows; ++r){
        if(r!=croppedRow->first || croppedRow == croppedRows.end()){
            stream.push_back(0);
            ++streamSize;
        }
        else{
            stream.push_back(1);
            stream.push_back(croppedRow->second.first);
            stream.push_back(croppedRow->second.second - croppedRow->second.first);
            ++croppedRow;
            streamSize += (1 + 2*8* sizeof(int));
        }
    }
    int code;
    int streamIndex=0;
    binaryStream.resize(streamSize);
    while(!stream.empty()){
        code = stream.front();
        stream.pop_front();
        if(code == 0){
            binaryStream[streamIndex++] = false;
        }
        else{
            binaryStream[streamIndex++] = true;
            for(int i=0; i<2; ++i){
                code = stream.front();
                stream.pop_front();
                FileHandler::writeIntToBinaryStream(code,binaryStream,streamIndex);
            }
        }
    }
}

void BWTRLEencoder::encodeTheTransformation()
{
    transformationBinaryStream.resize(transformationBinaryStreamLength);
    int streamIndex = 0;
    for(std::list< std::list< byte > >::iterator listIt = encodedRows.begin();
        listIt!=encodedRows.end(); ++listIt){
        for (std::list< byte >::iterator rowIt = listIt->begin();
             rowIt!=listIt->end(); ++rowIt) {
            byte code = *rowIt;
            FileHandler::writeByteToBinaryStream(code,transformationBinaryStream,streamIndex);
        }
    }
    binaryStream.insert(binaryStream.end(),transformationBinaryStream.begin(),transformationBinaryStream.end());
}

BWTRLEencoder::BWTRLEencoder(const BinaryImage &binaryImage): BinaryImageCompressor(binaryImage) {
    transformationBinaryStreamLength = 0;
}

bool BWTRLEencoder::isEfficient()
{
    /// TODO
    return true;
}

BinaryStream BWTRLEencoder::encode()
{
    getCroppedRows();
    for(std::list< std::pair< int, std::pair<int, int> > >::iterator it = croppedRows.begin();
            it!=croppedRows.end(); ++it) {
        RLE(getBWTResult(getCroppedRowString(it)));
    }
    encodeTheImage();
    encodeTheTransformation();

    /// TODO: Clean this, encode dimension in a better way
    BinaryStream dimensions(2*8*sizeof(int),false);
    int index = 0;
    FileHandler::writeIntToBinaryStream(binaryImage.rows, dimensions, index);
    FileHandler::writeIntToBinaryStream(binaryImage.cols, dimensions, index);
    binaryStream.insert(binaryStream.begin(),dimensions.begin(),dimensions.end());

    return binaryStream;
}

