//
// Created by Filippo Crinzi on 14/09/22.
//

#include "ImageElement.h"
#include "iostream"

int ImageElement::getDuration() {
    return Duration;
}

void ImageElement::play() {
    std::cout<<"\nimmagine: "<<Nome;
}
