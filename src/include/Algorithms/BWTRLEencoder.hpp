#pragma once

#include <vector>

#include <opencv2/opencv.hpp>

#include <Algorithms/BinaryImageCompressor.hpp>

typedef cv::Mat_<bool> BinaryImage;
typedef std::vector<bool> BinaryStream;
typedef unsigned char byte;

class BWTRLEencoder: public BinaryImageCompressor
{

private:

    std::list< std::pair< int, std::pair<int, int> > > croppedRows;
    std::list< std::list< byte > > encodedRows;
    BinaryStream binaryStream;
    BinaryStream transformationBinaryStream;
    unsigned int transformationBinaryStreamLength;

    void getCroppedRows();
    std::vector<bool> getCroppedRowString(const std::list<std::pair<int, std::pair<int, int> > >::iterator &row);
    std::pair< int,std::vector< bool > > getBWTResult(const std::vector<bool>& rowToTransform);
    void RLE(const std::pair<int, std::vector< bool > >& rowToEncode );
    void encodeTheImage();
    void encodeTheTransformation();
public:

    /**
    * @brief Constructor
    * @param binaryImage The binary image to compress
    */
    BWTRLEencoder(const BinaryImage &binaryImage);

    /**
    * @brief Checks the efficiency of the algorithm
    * @return Whether the algorithm is efficient or not
    */
    virtual bool isEfficient();

    /**
    * @brief Encodes a binary image to a compressed binary stream
    * @return The compressed binary stream
    */
    virtual BinaryStream encode();
};
