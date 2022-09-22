//
// Created by Filippo Crinzi on 14/09/22.
//

#include "VideoElement.h"
#include "iostream"

int VideoElement::getDuration() {
    return Duration;
}

void VideoElement::play() {
    std::cout<<"\nvideo: "<<Nome;
}
