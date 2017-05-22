#pragma once

#include <opencv2/opencv.hpp>

typedef cv::Mat_<bool> BinaryImage;
typedef std::vector<bool> BinaryStream;

namespace Statistics
{
/**
 *
 * @brief compares two binary images
 * @param firstImage
 * @param secondImage
 * @return true if they are the same
 */
bool isSameImage(const BinaryImage& firstImage, const BinaryImage& secondImage);

/**
 *
 * @param binaryImage
 * @param encodedMessage
 * @return compression ratio
 */
unsigned long getCompressionRatio(const BinaryImage &binaryImage, BinaryStream encodedMessage);
}