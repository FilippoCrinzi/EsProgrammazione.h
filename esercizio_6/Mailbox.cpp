//
// Created by Filippo Crinzi on 14/09/22.
//

#include "Mailbox.h"

void Mailbox::addEmail(Mail *m) {
    Cartella.push_back(m);
    DaLeggere++;
    lastMail=m;
    notify();
}

void Mailbox::readEmail(int position) {
    Cartella[position]->read();
    DaLeggere--;
    notify();
}

void Mailbox::removeObserver(Observer *o) {
    Observers.remove(o);
}

void Mailbox::notify() {
    for(auto itr=Observers.begin();itr!=Observers.end();itr++){
        (*itr)->update(DaLeggere);
    }

}

void Mailbox::addObserver(Observer *o) {
    Observers.push_back(o);
}
