#include <Utils/FileHandler.hpp>

#include <fstream>
#include <dirent.h>

#define MAX_VALUE true
#define CHAR_SIZE sizeof(char) * 8

void FileHandler::writeBinaryFileTo(const std::vector<bool> &data, const std::string &path)
{
    std::ofstream binaryFile(path.c_str(), std::ios::binary | std::ios::out);
    unsigned int i = 0;
    while (i < data.size())
    {
        char byte = 0;
        for (int j = CHAR_SIZE - 1; j >= 0 && i < data.size(); --j)
        {
            if (data[i])
            {
                byte |= (1 << j);
            }
            ++i;
        }
        binaryFile.write(&byte, sizeof(char));
    }
}

void FileHandler::writeByteToBinaryStream(byte data, BinaryStream& stream, int& index)
{
   for(int i = 8 *sizeof(byte)-1; i>=0; --i){
        stream[index+i] = (bool)((data >>= 1)& 1);
   }
    index+=8 *sizeof(byte);
}

void FileHandler::writeIntToBinaryStream(int data, BinaryStream& stream, int& index)
{
    for(int i = 8 *sizeof(int)-1; i>=0; --i){
        stream[index+i] = (bool)((data >>= 1)& 1);
    }
    index+=8 *sizeof(int);
}

std::vector<bool> FileHandler::readBinaryFileAt(const std::string &path)
{
    std::ifstream binaryFile(path.c_str(), std::ios::binary | std::ios::in);
    if (binaryFile.fail())
    {
        throw std::runtime_error(std::string("Cannot open file at") + path);
    }
    std::vector<bool> data;
    while (true)
    {
        char byte;
        binaryFile.read(&byte, sizeof(char));
        if (binaryFile.eof())
        {
            break;
        }
        for (int i = CHAR_SIZE - 1; i >= 0; --i)
        {
            data.push_back(byte & (1 << i));
        }
    }
    return data;
}

byte FileHandler::readeByteFromBinaryStream(const BinaryStream& stream, int& index){
    byte byteRead = 0;
    for(int i = 0; i<8*sizeof(byte); ++i){
        (stream[index++]? byteRead |= 1 << (8*sizeof(byte) - i): byteRead &= ~(1 << (8*sizeof(byte) - i)));
    }
    return byteRead;
}

int FileHandler::readeIntFromBinaryStream(const BinaryStream& stream, int& index){
    int intRead = 0;
    for(int i = 0; i<8*sizeof(int); ++i){
        (stream[index++]? intRead |= 1 << (8*sizeof(int) - i): intRead &= ~(1 << (8*sizeof(int) - i)));
    }
    return intRead;
}

BinaryImage FileHandler::readBinaryImageAt(const std::string &path, double thresholdValue)
{
    cv::Mat image = cv::imread(path);
    if (! image.data)
    {
        throw std::runtime_error(std::string("Cannot open image at") + path);
    }
    cv::Mat grayScaleImage;
    cv::cvtColor(image, grayScaleImage, CV_RGB2GRAY);
    BinaryImage binaryImage;
    cv::threshold(grayScaleImage, binaryImage, thresholdValue, MAX_VALUE, cv::THRESH_BINARY);
    return binaryImage;
}

std::vector<std::string> FileHandler::getFileNamesWithExtension(const std::string &path, const std::string &extension)
{
    DIR * directory = NULL;
    dirent * file = NULL;
    std:: string name;
    std::vector<std::string> filesNames;
    if ((directory = opendir(path.c_str())) != NULL)
    {
        while ((file = readdir(directory)) != NULL)
        {
            name = file->d_name;
            if (name.find(extension, (name.length() - extension.length())) != std::string::npos)
            {
                filesNames.push_back(name);
            }
        }
        closedir(directory);
    }
    std::sort(filesNames.begin(), filesNames.end());
    return filesNames;
}

std::vector<BinaryImage> FileHandler::getBinaryImagesWithExtension(const std::string &path, const std::string &extension, double thresholdValue)
{
    std::vector<std::string> imagesNames = getFileNamesWithExtension(path, extension);
    std::vector<BinaryImage> binaryImages;
    for (int i = 0; i < imagesNames.size(); ++i)
    {
        binaryImages.push_back(readBinaryImageAt(path + "/" + imagesNames[i], thresholdValue));
    }
    return binaryImages;
}
