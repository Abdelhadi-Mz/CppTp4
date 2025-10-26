#include "Livre.h"
int main(){
    Livre l1("Animal farm 3","george orwell",1900);
    Livre l2("Animal farm 2","george orwell",1900);
    Livre l3("Animal farm 1","george orwell",1900);
    l1.afficher();
    l2.afficher();
    l3.afficher();
    Livre::afficherTotal();

};