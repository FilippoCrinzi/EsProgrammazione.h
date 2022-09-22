#include <iostream>
#include "IconBadgeMonitor.h"
#include "GuiNotifier.h"
#include "Mailbox.h"



int main() {
    std::cout << "Esercizio 6" << std::endl;
    Mail A("certificato","anna","richiedo certificato");
    Mail B("Ricetta","paolo","richiedo ricetta");
    Mail C("informazioni","Giulio","Quando siete aperti");
    Mailbox Ambulatorio;
    IconBadgeMonitor Icona(&Ambulatorio);
    GuiNotifier Notifiche(&Ambulatorio);
    Ambulatorio.addObserver(&Notifiche);
    Ambulatorio.addObserver(&Icona);
    Ambulatorio.addEmail(&A);
    Ambulatorio.readEmail(0);
    Ambulatorio.addEmail((&B));
   // Ambulatorio.addEmail(&C);
    return 0;
}
