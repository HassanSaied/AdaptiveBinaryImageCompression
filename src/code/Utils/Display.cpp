#include <Utils/Display.hpp>


void Display::displayBinaryImage(BinaryImage binaryImage)
{
    cv::Mat forDisplay;
    cv::threshold(binaryImage, forDisplay, 0.5, 255, cv::THRESH_BINARY);
    cv::namedWindow("Display Image", cv::WINDOW_AUTOSIZE);
    cv::imshow("Display Image", forDisplay);
    cv::waitKey(0);
}
