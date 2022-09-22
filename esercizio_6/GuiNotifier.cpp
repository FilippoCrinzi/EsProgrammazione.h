//
// Created by Filippo Crinzi on 14/09/22.
//

#include "GuiNotifier.h"
#include "iostream"
void GuiNotifier::update(int l) {
    if(l>check) {
        std::cout << "\n Ti è arrivata una mail con Titolo: " << subject->getLastMail()->getTitolo() << "\n Mittente: "
                  << subject->getLastMail()->getMittente();
        check=l;
    }
    else
        check=l;

}
