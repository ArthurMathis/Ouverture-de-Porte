//
// Created by Arthur Mathis on 03/10/2023.
//

#include "../header/badge.h"

badge::badge(std::string id, const autorisation &a):
    d_id{id}, d_autorisation{a}{
}

badge::badge(std::string id, int niveau)
    :d_id{id}, d_autorisation{niveau, false}{
}

std::string badge::id() const{
    return d_id;
}

bool badge::estValide(const autorisation &a) const{
    return d_autorisation.inferieureA(a);
}

void badge::active(){
    d_autorisation.active();
}

void badge::desactive(){
    d_autorisation.desactive();
}

void badge::affichSur(std::ostream &ost) const{
    ost<<'['<<d_id<<' '<<d_autorisation<<']';
}

void badge::litDepuis(std::istream &ist){
    char temp;
    std::string c;
    autorisation a;
    ist>>temp;
    if(temp == '['){
        ist>>c>>a;
    }
    d_id = c;
    d_autorisation = a;
}

bool badge::operator==(const badge &b) const{
    return id() == b.id() && d_autorisation == b.d_autorisation;
}

std::ostream& operator<<(std::ostream &ost, const badge &b){
    b.affichSur(ost);
    return ost;
}

std::istream& operator>>(std::istream &ist, badge &b){
    b.litDepuis(ist);
    return ist;
}
