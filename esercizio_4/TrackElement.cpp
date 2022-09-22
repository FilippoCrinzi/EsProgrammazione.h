//
// Created by Filippo Crinzi on 14/09/22.
//

#include "TrackElement.h"

void TrackElement::addFile(File *f) {
    Elements.push_back(f);
}

void TrackElement::removeFile(File *f) {
    Elements.remove(f);
}

void TrackElement::play() {
    std::cout<<"\nAvvio:"<<Nome;
    for(auto itr=Elements.begin();itr!=Elements.end();itr++){
        (*itr)->play();
    }
}

int TrackElement::getDuration() {
    for(auto itr=Elements.begin();itr!=Elements.end();itr++){
        Duration=Duration+(*itr)->getDuration();
    }
    return Duration;
}
