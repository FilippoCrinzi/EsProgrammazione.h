//
// Created by Filippo Crinzi on 14/09/22.
//

#ifndef MAIN_CPP_SUBJECT_H
#define MAIN_CPP_SUBJECT_H


#include "Observer.h"

class Subject {
public:
    virtual void notify()=0;
    virtual void addObserver(Observer* o)=0;
    virtual void removeObserver(Observer* o)=0;
    virtual ~Subject(){}
};

#endif //MAIN_CPP_SUBJECT_H
