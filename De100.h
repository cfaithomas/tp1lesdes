//
// Created by eric on 26/08/2020.
//

#ifndef TP1_DE100_H
#define TP1_DE100_H


class De100 {

private:
    int valeur;


public:
    De100();
    ~De100();
    void lance();
    bool exact(const int chiffre) const;
    bool plusgrand(const int chiffre) const;
    bool pluspetit(const int chiffre) const;


};


#endif //TP1_DE100_H
