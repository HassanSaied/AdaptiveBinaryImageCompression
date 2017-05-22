#pragma once

#include <vector>

#include <opencv2/opencv.hpp>

#include <Algorithms/BinaryImageDecompressor.hpp>

typedef cv::Mat_<bool> BinaryImage;
typedef std::vector<bool> BinaryStream;
typedef unsigned char byte;

class BWTRLEdecoder: public BinaryImageDecompressor
{

private:
    int mBinaryStreamIndex;
    BinaryImage mDecodedBinaryImage;
    int mDecodedBinaryImageRows, mDecodedBinaryImageCols;
    std::list< std::pair< int, std::pair<int, int> > > mCroppedRows;
    std::list< std::list< byte > > mCroppedRowsInRLE;

    void decodeImageDimensions();
    void decodeCroppedRows();
    void decodeTransformation();
    std::pair< int, std::vector < bool > > decodeRLE(std::list< byte > pCroppedRowInRLE);
    std::vector < bool > reverseBWT(std::pair< int, std::vector < bool > > pTransformStringData);
    std::vector<bool> getCroppedRowString(const std::list<std::pair<int, std::pair<int, int> > >::iterator &row);

public:

    /**
    * @brief Constructor
    * @param binaryStream The binary stream to decompress
    */
    BWTRLEdecoder(const BinaryStream &pBinaryStream);

    /**
    * @brief Decodes the compressed binary stream to the original binary image
    * @param binaryStream The binary stream to decode
    * @return The original binary image
    */
    virtual BinaryImage decode();

};
