//
// Created by Filippo Crinzi on 14/09/22.
//

#ifndef MAIN_CPP_GUINOTIFIER_H
#define MAIN_CPP_GUINOTIFIER_H
#include "Observer.h"
#include "Mailbox.h"
#include "Mail.h"

class GuiNotifier : public Observer{
public:
    GuiNotifier(Mailbox* s) : subject(s){}

    virtual void update(int l);

    virtual ~GuiNotifier(){
        subject->removeObserver(this);
    }
private:
    Mailbox* subject;
    int check=0;
};


#endif //MAIN_CPP_GUINOTIFIER_H
