#include<iostream>
#include "Livre.h"
Livre::Livre(std::string titre, std::string auteur, int annee){
            this->titre=titre;
            this->auteur=auteur;
            this->annee=annee;
            nbLivres++;
}
int Livre::nbLivres=0;
void Livre::afficher(){
     std::cout<<"Titre :"<<titre<<" Auteur :"<< auteur<<" Annee:"<<annee<<std::endl;
}
void Livre::afficherTotal(){
     std::cout << "Nombre total de livres : " << nbLivres << std::endl;
}