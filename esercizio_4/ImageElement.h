//
// Created by Filippo Crinzi on 14/09/22.
//

#ifndef MAIN_CPP_IMAGEELEMENT_H
#define MAIN_CPP_IMAGEELEMENT_H
#include "File.h"
#include "iostream"

class ImageElement : public File{
public:
    ImageElement(std::string nome,int h, int l, int f) : Nome(nome),Altezza(h),Lunghezza(l),Fotogramma(f){}

    virtual void play() override;

    virtual int getDuration() override;

    virtual ~ImageElement(){}

private:
    std::string Nome;
    int Altezza,Lunghezza,Fotogramma;
    int Duration=5;
};


#endif //MAIN_CPP_IMAGEELEMENT_H
