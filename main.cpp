#include <iostream>
#include "header/autorisation.h"
#include "header/badge.h"
#include "header/porte.h"

using std::cout, std::cin, std::endl;

void test_Autorisation(){
    autorisation a{};
    cout<<a<<endl<<"Entrez vos valeurs"<<endl;

    cin>>a;
    cout<<a;
}

void test_Badge(){
    badge b{"Arthur", {23, true}};
    cout<<b;

    cout<<endl<<"Entrez vos valeurs : "<<endl;
    cin>>b;
    cout<<b;
}

void test_Porte(){
    badge b{"Arthur", {23, true}};
    porte p{{2, true}};

    p.litBadge(b);
}

int main() {
    test_Porte();
    return 0;
}
