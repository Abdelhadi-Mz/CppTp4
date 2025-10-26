#include <iostream>
#include <string>

class Universite {
private:
    std::string nom;

public:
    Universite(const std::string& n) : nom(n) {}
    void afficherNom() const {
        std::cout << "Université : " << nom << std::endl;
    }
    std::string getNom() const {
        return nom;
    }
};

class Etudiant {
private:
    std::string nom;
    int age;
    Universite* universite;
    static int nbEtudiants;

public:
    Etudiant(const std::string& n, int a, Universite* u)
        : nom(n), age(a), universite(u)
    {
        nbEtudiants++;
    }

    void afficher() const {
        std::cout << "Nom : " << nom 
                  << ", Age : " << age 
                  << ", Université : " << universite->getNom()
                  << std::endl;
    }

    static void afficherTotal() {
        std::cout << "Nombre total d'étudiants : " << nbEtudiants << std::endl;
    }
};

int Etudiant::nbEtudiants = 0;

int main() {
    Universite u("CADY aayad");

    Etudiant e1("nour", 20, &u);
    Etudiant e2("nouamane", 21, &u);

    e1.afficher();
    e2.afficher();

    Etudiant::afficherTotal();

    return 0;
}
