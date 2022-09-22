//
// Created by Filippo Crinzi on 14/09/22.
//

#ifndef MAIN_CPP_MAILBOX_H
#define MAIN_CPP_MAILBOX_H


#include "Subject.h"
#include "Mail.h"
#include "vector"
#include "list"

class Mailbox : public Subject{
public:
    void addEmail(Mail * m);
    void readEmail(int position);
    virtual void addObserver(Observer* o) override;
    virtual void removeObserver(Observer* o) override;
    virtual void notify() override;
    virtual ~Mailbox(){}

    Mail *getLastMail() const {
        return lastMail;
    }

private:
    int DaLeggere=0;
    std::vector<Mail*> Cartella;
    std::list<Observer*> Observers;
    Mail* lastMail;
};


#endif //MAIN_CPP_MAILBOX_H
