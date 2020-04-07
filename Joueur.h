#pragma once
#include <string>
#include <vector>
#include "CartesPropriete.h"
using namespace std;


class Joueur
{
public:
    Joueur(vector<Joueur*>* listeJoueurs);
    
    void setCagnotte(int effetArgent);
    void setLocalisation(int localisation);
    void setPenalite(int penalite);
    void addLocalisation(int effetDeplacement);
    

    string getNom();
   
    int getCagnotte();
    int getLocalisation();
    int getPenalite();
    
    //void cartePropj();
    void afficher();

protected:

private:
    string nom;
    int cagnotte;
    int numero;
    int type;
    int localisation;
    int couleur;
    int penalite;
    // vector<CartePropriete*> MesProps;  //en lien avec la clasee cartePropriete
};

class Humain : public Joueur {
public:
    Humain();

};

class Bot : public Joueur {
public:
    Bot();
};