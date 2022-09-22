//
// Created by Filippo Crinzi on 14/09/22.
//

#ifndef MAIN_CPP_VIDEOELEMENT_H
#define MAIN_CPP_VIDEOELEMENT_H
#include "File.h"
#include "iostream"

class VideoElement : public File{
public:
    VideoElement(std::string nome,int h, int l, int f,int d) : Nome(nome),Altezza(h),Lunghezza(l),Fotogramma(f),Duration(d){}

    virtual void play() override;

    virtual int getDuration() override;

    virtual ~VideoElement(){}

private:
    std::string Nome;
    int Altezza,Lunghezza,Fotogramma;
    int Duration;
};


#endif //MAIN_CPP_VIDEOELEMENT_H
