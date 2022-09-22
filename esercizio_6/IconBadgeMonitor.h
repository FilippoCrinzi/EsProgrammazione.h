//
// Created by Filippo Crinzi on 14/09/22.
//

#ifndef MAIN_CPP_ICONBADGEMONITOR_H
#define MAIN_CPP_ICONBADGEMONITOR_H

#include "Observer.h"
#include "Mailbox.h"
#include "Mail.h"

class IconBadgeMonitor : public Observer{
public:
    IconBadgeMonitor(Mailbox* s) : subject(s){}

    virtual void update(int l);

    virtual ~IconBadgeMonitor(){
        subject->removeObserver(this);
    }
private:
    Mailbox* subject;
};


#endif //MAIN_CPP_ICONBADGEMONITOR_H
