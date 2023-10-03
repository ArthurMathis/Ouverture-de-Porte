//
// Created by Arthur Mathis on 03/10/2023.
//

#include "../header/autorisation.h"

autorisation::autorisation(int niveau, bool activee):
    d_niveau{niveau}, d_activee{activee}{
}

int autorisation::niveau() const{
    return d_niveau;
}

bool autorisation::activee() const{
    return d_activee;
}

bool autorisation::inferieureA(const autorisation &a) const{
    if(activee() && a.activee() || !activee() && !a.activee()){
        return (niveau() > a.niveau());
    }
    return activee();
}

void autorisation::active(){
    d_activee = true;
}

void autorisation::desactive(){
    d_activee = false;
}

void autorisation::affichSur(std::ostream &ost) const{
    ost<<'[';
    if(activee() ? ost<<'A' : ost<<'D'){};
    ost<<' '<<niveau()<<']';
}

void autorisation::litDepuis(std::istream &ist) {
    char c;
    int niveau;
    ist >> c;
    if(c == '[')
    {
        ist >> c;
        if(c == 'A' ? d_activee = true : d_activee = false){};
        ist >> niveau;
        d_niveau = niveau;
    }
}

bool autorisation::operator==(const autorisation &a) const{
    return niveau() == a.niveau() && activee() == a.activee();
}

std::ostream& operator<<(std::ostream &ost, const autorisation &a){
    a.affichSur(ost);
    return ost;
}

std::istream& operator>>(std::istream &ist, autorisation &a){
    a.litDepuis(ist);
    return ist;
}
