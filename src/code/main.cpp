#include <Utils/FileHandler.hpp>
#include <Utils/Display.hpp>
#include <opencv2/opencv.hpp>

int main(int argc, char ** argv)
{
    if (argc != 2)
    {
        std::cout << "usage: adic <DataSetPath>\n";
        return -1;
    }
    //Loads the entire Dataset
    std::vector<BinaryImage> binaryImages = FileHandler::getBinaryImagesWithExtension(argv[1], "jpg", 180);
    // Sample loop on a BinaryImage
    BinaryImage binaryImage = binaryImages[0];
    int numberOfOnes = 0;
    int numberOfZeros = 0;
    for (unsigned int i = 0; i < binaryImage.rows; i++)
    {
        for (unsigned int j = 0; j < binaryImage.cols; j++)
            if (binaryImage(i, j))
            {
                numberOfOnes++;
            }
            else
            {
                numberOfZeros++;
            }
    }
    std::cout << "Ones: " << numberOfOnes << ", Zeros: " << numberOfZeros << std::endl;
    // Sample Display
    Display::displayBinaryImage(binaryImage);
    return 0;
}
