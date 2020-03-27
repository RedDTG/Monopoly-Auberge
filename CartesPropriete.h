#pragma once
#include <string>
#include <iostream>
using namespace std;

class CartePropriete
{
private:
	string nom;
	int loyer;
	string Nomcouleur;
	int proprietaire;
	int idcouleur;
	int type;
	int prixAchat;
	//type 1 = Propriete
	//type 2 = gare 
	//type 3 = compagnies


public:
	CartePropriete(string nom, int prixAchat, int loyer, string Nomcouleur, int type);
	void initCarteProp(string nom, int prixAchat, int loyer, string Nomcouleur, int type) {
		this->nom = nom;
		this->loyer = loyer;
		this->Nomcouleur = Nomcouleur;
		this->proprietaire = 0;
		this->type = type;
		this->idcouleur = 0;
		this->prixAchat = prixAchat;
	}

	void afficherCarteProp(CartePropriete* tableauProp[28]);


};