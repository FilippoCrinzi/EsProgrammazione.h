#include <iostream>
#include "ImageElement.h"
#include "VideoElement.h"
#include "TrackElement.h"


int main() {
    std::cout << "Esercizio 4" << std::endl;
    std::cout << "esercizio 4" << std::endl;
    ImageElement immagine1("immagine1",5,4,20);
    ImageElement immagine2("immagine2",5,4,20);
    VideoElement video1("video1",5,4,20,15);
    TrackElement montaggio("Primo montaggio");
    montaggio.addFile(&immagine1);
    montaggio.addFile(&video1);
    montaggio.addFile(&immagine2);
    montaggio.play();
    montaggio.removeFile(&immagine1);
    montaggio.play();
    std::cout<<"\n Durata montaggio: "<<montaggio.getDuration()<<" secondi";

    return 0;
}
