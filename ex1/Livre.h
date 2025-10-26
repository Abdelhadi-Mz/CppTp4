#ifndef LIVRE_H
#define LIVRE_H
#include<string>
class Livre{
    private:
        std::string titre,auteur;
        int annee;
        static int nbLivres;
    public:
        Livre(std::string titre, std::string auteur, int annee);
        void afficher();
        static void afficherTotal();
};
#endif