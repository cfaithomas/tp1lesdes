//
// Created by eric on 26/08/2020.
//

#ifndef TP1_MYSTERE_H
#define TP1_MYSTERE_H


#include "De100.h"

class Mystere {

private:
    De100 de100;
    int nbcoupsmax;

public:
    Mystere();
    int saisiejoueur();
    void jeu();


};


#endif //TP1_MYSTERE_H
