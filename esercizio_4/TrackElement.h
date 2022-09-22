//
// Created by Filippo Crinzi on 14/09/22.
//

#ifndef MAIN_CPP_TRACKELEMENT_H
#define MAIN_CPP_TRACKELEMENT_H
#include "File.h"
#include "iostream"
#include "list"

class TrackElement : public File{
public:
    TrackElement(std::string nome) : Nome(nome){}

    void addFile(File* f);

    void removeFile(File* f);

    virtual void play() override;

    virtual int getDuration() override;

    virtual ~TrackElement(){}

private:
    std::string Nome;
    std::list<File*> Elements;
    int Duration=0;


};


#endif //MAIN_CPP_TRACKELEMENT_H
