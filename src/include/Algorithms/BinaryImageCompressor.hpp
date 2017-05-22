#pragma once

#include <vector>

#include <opencv2/opencv.hpp>

typedef cv::Mat_<bool> BinaryImage;
typedef std::vector<bool> BinaryStream;

class BinaryImageCompressor
{
    
protected:
    BinaryImage binaryImage;
    
public:
    
    BinaryImageCompressor(const BinaryImage &binaryImage): binaryImage(binaryImage) {}

    /**
      * @brief Checks the efficiency of the algorithm
      * @return Whether the algorithm is efficient or not
      */
    virtual bool isEfficient() = 0;

    /**
      * @brief Encodes a binary image to a compressed binary stream
      * @return The compressed binary stream
      */
    virtual BinaryStream encode() = 0;

};

