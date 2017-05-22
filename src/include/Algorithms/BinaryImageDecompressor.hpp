#pragma once

#include <vector>

#include <opencv2/opencv.hpp>

typedef cv::Mat_<bool> BinaryImage;
typedef std::vector<bool> BinaryStream;

class BinaryImageDecompressor
{

protected:
    BinaryStream mBinaryStream;

public:

    BinaryImageDecompressor(const BinaryStream &pBinaryStream){
            mBinaryStream = pBinaryStream;
    }

    /**
      * @brief Decodes a binary stream to a decoded binary image
      * @return The decoded binary image
      */
    virtual BinaryImage decode() = 0;

};

