//
// Created by eric on 24/08/2020.
//

#include <cstdlib>
#include <chrono>
#include <thread>
#include <iostream>
#include "De.h"

De::De() {
srand(std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count());
valeur=1;
    std::this_thread::sleep_for(std::chrono::milliseconds(1)); //temporisation 1 ms
}

void De::lancer() {
valeur=rand()%6+1;
}

int De::getValeur() const {
    return valeur;
}

De::~De() {

}

bool De::gagne(const De &de1, const De &de2, const De &de3) {

    return de1.valeur + de2.valeur + de3.valeur == 7 && de1.valeur != de2.valeur && de2.valeur != de3.valeur &&
           de1.valeur != de3.valeur;
}



