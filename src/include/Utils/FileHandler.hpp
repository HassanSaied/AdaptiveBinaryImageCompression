#pragma once

#include <vector>
#include <string>

#include <opencv2/opencv.hpp>

typedef cv::Mat_<bool> BinaryImage;
typedef std::vector<bool> BinaryStream;
typedef unsigned char byte;

namespace FileHandler
{

/**
 * @brief Writes binary data to a file
 * @param data The data to be written
 * @param path Path to file
 */
void writeBinaryFileTo(const std::vector<bool> &data, const std::string &path);

/**
*
* @param data
* @param stream
* @param index
*/
void writeByteToBinaryStream(byte data, BinaryStream& stream, int& index);

/**
*
* @param data
* @param stream
* @param index
*/
void writeIntToBinaryStream(int data, BinaryStream& stream, int& index);

/**
 * @brief Reads binary data from a file
 * @param path Path to file
 * @return Binary data stored in the file
 * @throw std::runtime_error If no file at path or it cannot be opened
 */
std::vector<bool> readBinaryFileAt(const std::string &path);

/**
 *
 * @param stream
 * @param index
 */
byte readeByteFromBinaryStream(const BinaryStream& stream, int& index);

/**
*
* @param stream
* @param index
*/
int readeIntFromBinaryStream(const BinaryStream& stream, int& index);

/**
 * @brief Reads a binary image
 * @param path Path to image
 * @param thresholdValue The threshold value to use
 * @return Binary image located at the given path
 * @throw std::runtime_error If no image at path or it cannot be opened
 */
BinaryImage readBinaryImageAt(const std::string &path, double thresholdValue);

/**
 * @brief Gets the file names in a directory by their extension
 * @param path Path to directory
 * @param extension Extension to search for
 * @return File names ordered lexicographically in directory path with extension extension
 */
std::vector<std::string> getFileNamesWithExtension(const std::string &path, const std::string &extension);


/**
 * @brief Gets the binary images in a directory
 * @param path Path to directory
 * @param extension Extension to search for
 * @param thresholdValue The threshold value to use
 * @return Binary images ordered lexicographically by name in directory path with extension extension
 */
std::vector<BinaryImage> getBinaryImagesWithExtension(const std::string &path, const std::string &extension, double thresholdValue);

};
