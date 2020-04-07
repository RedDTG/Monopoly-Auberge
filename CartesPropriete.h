#pragma once
#include <string>
#include <iostream>
#include "Joueur.h"
using namespace std;

class CartePropriete
{
private:
	string nom;
	int loyer;
	string Nomcouleur;
	Joueur* proprietaire;
	int idcouleur;
	int type;
	int prixAchat;
	//type 1 = Propriete
	//type 2 = gare 
	//type 3 = compagnies


public:
	CartePropriete(string nom, int prixAchat, int loyer, string Nomcouleur, int type, int idcouleur);
	Joueur* getProprio();
	void afficherCarteProp();
	string getNom();
	int getPrix();
	int getLoyer();

	void setProprio(Joueur* proprio);


};