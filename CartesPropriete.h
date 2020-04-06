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
	CartePropriete(string nom, int prixAchat, int loyer, string Nomcouleur, int type, int idcouleur);

	void afficherCarteProp();


};