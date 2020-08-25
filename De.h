//
// Created by eric on 24/08/2020.
//

#ifndef TP1_DE_H
#define TP1_DE_H


class De {

private:
    int valeur;
    bool etat;

public:
    De();
    ~De();
    void lancer();
    void piper();
    int getValeur() const;
    static bool gagne(const De &de1, const De &de2, const De &de3);
};


#endif //TP1_DE_H
