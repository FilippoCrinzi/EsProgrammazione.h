//
// Created by Filippo Crinzi on 14/09/22.
//

#ifndef MAIN_CPP_MAIL_H
#define MAIN_CPP_MAIL_H
#include "iostream"


class Mail {
public:
    Mail(std::string T,std::string M,std::string Tes) : Titolo(T),Mittente(M),Testo(Tes){}

    void read();

    const std::string &getTitolo() const {
        return Titolo;
    }

    const std::string &getMittente() const {
        return Mittente;
    }

    const std::string &getTesto() const {
        return Testo;
    }

private:
    std::string Titolo,Mittente,Testo;
    bool Letto=false;
};


#endif //MAIN_CPP_MAIL_H
