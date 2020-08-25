#include <iostream>
#include "De.h"

int main() {
    De de1; //instanciation de l'objet de1
    De de2;
    De de3;
    de1.piper();

    do {

     de1.lancer();
     de2.lancer();
     de3.lancer();
     std::cout<<de1.getValeur()<<" "<<de2.getValeur()<<" "<<de3.getValeur()<<std::endl;
    }while(!De::gagne(de1,de2,de3));

}
