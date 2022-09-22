//
// Created by Filippo Crinzi on 14/09/22.
//

#ifndef MAIN_CPP_FILE_H
#define MAIN_CPP_FILE_H


class File {
public:
    virtual ~File(){}
    virtual void play()=0;
    virtual int getDuration()=0;
};


#endif //MAIN_CPP_FILE_H
