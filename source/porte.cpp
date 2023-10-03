//
// Created by Arthur Mathis on 03/10/2023.
//

#include "../header/porte.h"
#include <iostream>

porte::porte(const autorisation a, const std::vector<badge> &vect)
    :d_autorisation{a}, d_badgeLus{vect}{
}

void porte::ouvre(){

}

void porte::bloque(){

}

void porte::litBadge(const badge &b){
    enregistreBadge(b);
    if(b.estValide(d_autorisation)){
        ouvre();
        std::cout<<"Porte ouverte";
    } else {
        bloque();
        std::cout<<"Porte bloquee";
    }
}

void porte::enregistreBadge(const badge &b){
    d_badgeLus.push_back(b);
}

int porte::nombreFoisLu(const badge &b) const{
    unsigned compt{0};
    for(const badge &d_b : d_badgeLus){
        if(d_b == b) compt++;
    }
    return compt;
}