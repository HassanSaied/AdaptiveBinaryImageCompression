/*#include <Algorithms/BTC.hpp>

#include <set>
#include <stdexcept>


SymbolId BTC::getSymbolId(SymbolDefinition symbolDefinition)
{
    for (std::map<SymbolId, SymbolDefinition>::iterator it = symbols.begin(); it != symbols.end(); ++it)
    {
        if (it->second == symbolDefinition)
            return it->first;
    }
    symbols[symbols.size()] = symbolDefinition;
    return symbols.size() - 1;
}


void BTC::fillSymbolDefinition(SymbolDefinition &symbolDefinition, const Point &occurrencePoint, const Point &currentPoint)
{
    const int x = occurrencePoint.first + currentPoint.first;
    const int y = occurrencePoint.second + currentPoint.second;
    if (x < 0 || x > binaryImage.rows || y < 0 || y > binaryImage.cols || binaryImage(x, y))
    {
        return;
    }
    binaryImage(x, y) = true;


    const int dy[] = {-1,-1,-1,0,0,1,1,1};
    const int dx[] = {-1,0,1,-1,1,-1,0,1};

    const int &i = currentPoint.first;
    const int &j = currentPoint.second;
    symbolDefinition.push_back(Point(i, j));
    for(int index=0; index<8; ++index){
        if (i + dy[index] < 0 || i + dy[index] > binaryImage.rows || j + dx[index] < 0 || j + dx[index] > binaryImage.cols ||
            binaryImage(i + dy[index], j + dx[index]))
        {
            continue;
        }
        // output index as 3 bits
        fillSymbolDefinition(symbolDefinition, occurrencePoint, Point(i + dy[index], j + dx[index]));
    }


void BTC::consumeSymbolAt(const Point &point)
{
    SymbolDefinition symbolDefinition;
    fillSymbolDefinition(symbolDefinition, point);
    SymbolId symbolId =  getSymbolId(symbolDefinition);
    occurrences[point] = symbolId;
}

void BTC::getSymbols()
{
    for (int i = 0; i < binaryImage.rows; ++i)
    {
        for (int j = 0; j < binaryImage.cols; ++j)
        {
            if (! binaryImage(i, j))
            {
                consumeSymbolAt(Point(i, j));
            }
        }
    }
}

void BTC::fillSymbolsStream()
{

}

void BTC::fillOccurrencesStream()
{

}


BTC::BTC(const BinaryImage &binaryImage): BinaryImageCompressor(binaryImage)
{
    getSymbols();
}

bool BTC::isEfficient()
{
    std::cout << "Number of symbols = " << symbols.size() << std::endl;
    std::cout << "Number of occurrences = " << occurrences.size() << std::endl;
    return symbols.size() < 256;
}

BinaryStream BTC::encode()
{
    throw std::logic_error("Not Implemented");
}

BinaryImage BTC::decode(const BinaryStream &binaryStream)
{
    throw std::logic_error("Not Implemented");
}
 */