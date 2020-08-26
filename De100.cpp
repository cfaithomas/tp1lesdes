//
// Created by eric on 26/08/2020.
//

#include <chrono>
#include <cstdlib>
#include <thread>
#include "De100.h"

De100::De100() {
    srand(std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count());
    lance();
    std::this_thread::sleep_for(std::chrono::milliseconds(1)); //temporisation 1 ms
}

De100::~De100() {

}

void De100::lance() {
    valeur = rand() % 100 + 1;
}

bool De100::exact(const int chiffre) const {

    return chiffre==valeur

}

bool De100::plusgrand(const int chiffre) const {
    return chiffre>valeur;
}

bool De100::pluspetit(const int chiffre) const {
    return  chiffre<valeur;
}
