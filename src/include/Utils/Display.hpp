#pragma once

#include <vector>
#include <string>

#include <opencv2/opencv.hpp>

typedef cv::Mat_<bool> BinaryImage;

namespace Display
{

/**
 * @brief Displays a binary image in a new window
 * @param binaryImage the binary image to display
 */
void displayBinaryImage(BinaryImage binaryImage);

};
