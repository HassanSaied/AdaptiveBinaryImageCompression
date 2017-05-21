#pragma once

#include <vector>
#include <string>

#include <opencv2/opencv.hpp>

typedef cv::Mat_<bool> BinaryImage;

namespace BTC
{

/**
 * @brief Encodes a binary image to a compressed binary stream
 * @param binaryImage The binary image to encode
 * @return The compressed binary stream
 */
std::vector<bool> encode(BinaryImage &binaryImage);

/**
 * @brief Decodes the compressed binary stream to the original binary image
 * @param binaryStream The binary stream to decode
 * @return The original binary image
 */
BinaryImage decode(std::vector<bool> binaryStream);

/**
 * @brief Checks the efficiency of the algorithm
 * @param binaryImage The binary image to check
 * @return Whether the algorithm is efficient or not
 */
bool isEfficient(const BinaryImage &binaryImage);

};
