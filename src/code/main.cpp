#include <Utils/FileHandler.hpp>
#include <Utils/Display.hpp>
#include <Utils/Statistics.hpp>
#include <Algorithms/BWTRLEencoder.hpp>
#include <cstdio>
#include <Algorithms/BTWRLEdecoder.hpp>

int main(int argc, char ** argv)
{
    /*if (argc != 2)
    {
        std::cout << "usage: abic <DataSetPath>\n";
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
    Display::displayBinaryImage(binaryImage);*/


    int j = 8;
    BinaryStream bs(32);
    int n =0;
    FileHandler::writeIntToBinaryStream(j,bs,n);
    n = 0;
    int i = FileHandler::readeIntFromBinaryStream(bs,n);

    std::vector<BinaryImage> binaryImages = FileHandler::getBinaryImagesWithExtension("/home/mina", "jpg", 180);
    BWTRLEencoder bwtrlEencoder(binaryImages[0]);
    BinaryStream binaryStream = bwtrlEencoder.encode();
    BWTRLEdecoder bwtrlEdecoder(binaryStream);
    printf("finished\n");
    if(Statistics::isSameImage(binaryImages[0], bwtrlEdecoder.decode())){
        printf("Thanks GOD!\n");
    }
    std::cout<<Statistics::getCompressionRatio(binaryImages[0],binaryStream);
    getchar();

    return 0;
}


