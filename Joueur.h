#pragma once
#include <string>
#include <vector>
#include "CartesPropriete.h"
#include "des.h"
#include <iostream>
using namespace std;


class Joueur
{
public:
    Joueur(vector<Joueur*>* listeJoueurs);
    
    void setCagnotte(int effetArgent);
    void setLocalisation(int localisation);
    void setPenalite(int penalite);
    void addLocalisation(int effetDeplacement);
    void setNom(string nom);
    void setNumero(int numero);
    void setCouleur(int couleur);
    void setType(int type);

    string getNom();
    int getCagnotte();
    int getLocalisation();
    int getPenalite();
    int getCouleur();
    int getNumero();
    int getType();

    int detectionGroupe(string nomCouleur, int groupe);
    void addCarteProp(CartePropriete* carte);


    void afficher();

private:
    string nom;
    int cagnotte;
    int numero;
    int type;
    int localisation;
    int couleur;
    int penalite;
    vector<CartePropriete*> mesProps;
};

class Humain : public Joueur {
public:
    Humain(vector<Joueur*>* listeJoueurs);
    virtual void deroulementTour(plateau* plateauJeu);
};

class Bot : public Joueur {
public:
    Bot(vector<Joueur*>* listeJoueurs);
    virtual void deroulementTour();
};