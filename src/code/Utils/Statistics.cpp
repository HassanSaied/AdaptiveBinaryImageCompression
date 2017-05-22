#pragma once

#include <Utils/Statistics.hpp>

bool Statistics::isSameImage(const BinaryImage& firstImage, const BinaryImage& secondImage) {
    if(firstImage.rows!=secondImage.rows || firstImage.cols!=secondImage.cols){
        return false;
    }

    for(int i=0; i<firstImage.rows;++i){
        for(int j=0; j<firstImage.cols; ++j){
            if(firstImage(i,j)!=secondImage(i,j)){
                return false;
            }
        }
    }

    return true;
}


unsigned long Statistics::getCompressionRatio(const BinaryImage &binaryImage, BinaryStream encodedMessage) {
    return (binaryImage.cols * binaryImage.rows) / (encodedMessage.size() );
}