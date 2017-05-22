#pragma once

#include <vector>
#include <map>

#include <opencv2/opencv.hpp>

#include <Algorithms/BinaryImageCompressor.hpp>

typedef cv::Mat_<bool> BinaryImage;
typedef std::vector<bool> BinaryStream;
typedef std::pair<int, int> Point;
typedef std::vector<Point> SymbolDefinition;
typedef unsigned short SymbolId;

class BTC: public BinaryImageCompressor
{

private:

    std::map<SymbolId, SymbolDefinition> symbols;
    std::map<Point, SymbolId> occurrences;
    BinaryStream symbolsStream;
    BinaryStream occurrencesStream;

    SymbolId getSymbolId(SymbolDefinition symbolDefinition);
    void fillSymbolDefinition(SymbolDefinition &symbolDefinition, const Point &occurrencePoint, const Point &currentPoint = Point(0, 0));
    void consumeSymbolAt(const Point &point);
    void getSymbols();
    void fillSymbolsStream();
    void fillOccurrencesStream();

public:

    /**
    * @brief Constructor
    * @param binaryImage The binary image to compress
    */
    BTC(const BinaryImage &binaryImage);

    /**
    * @brief Checks the efficiency of the algorithm
    * @return Whether the algorithm is efficient or not
    */
    virtual bool isEfficient();

    /**
    * @brief Encodes a binary image to a compressed binary stream
    * @return The compressed binary stream
    */
    virtual BinaryStream encode();

    /**
    * @brief Decodes the compressed binary stream to the original binary image
    * @param binaryStream The binary stream to decode
    * @return The original binary image
    */
    static BinaryImage decode(const BinaryStream &binaryStream);

};