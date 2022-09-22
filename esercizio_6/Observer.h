//
// Created by Filippo Crinzi on 14/09/22.
//

#ifndef MAIN_CPP_OBSERVER_H
#define MAIN_CPP_OBSERVER_H


class Observer {
public:
    virtual void update(int i) =0;
    virtual ~Observer(){}
};


#endif //MAIN_CPP_OBSERVER_H
