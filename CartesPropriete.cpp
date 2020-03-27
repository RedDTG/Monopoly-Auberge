#include "CartesPropriete.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <time.h>
#include <vector>
using namespace std;

CartePropriete::CartePropriete(string nom, int prixAchat, int loyer, string Nomcouleur, int type) {

}

void CartePropriete::afficherCarteProp(CartePropriete* tableauProp[28])
{
	cout << "Nom de la carte : " << this->nom << endl;
	cout <<"Prix de la propriété: "<<this->prixAchat << endl;
	cout << "Prix du loyer : " << this->loyer << " | Type de la propriété : " << this->type << " |  Couleur : " << this->Nomcouleur << endl;
	cout << endl;
}



void creaCarteProp() {

	vector<CartePropriete*>* tableauProp = new vector<CartePropriete*>(0);

	tableauProp->push_back(new CartePropriete("Nom Prop 1", 60, 2, "Rose", 1));
	tableauProp->push_back(new CartePropriete("Nom Prop 2", 60, 4, "Rose", 1));
	tableauProp->push_back(new CartePropriete("Nom Prop 3", 200, 25, "Noir", 2));
	tableauProp->push_back(new CartePropriete("Nom Prop 4", 100, 6, "Bleu clair", 1));
	tableauProp->push_back(new CartePropriete("Nom Prop 5", 100, 6, "Bleu clair", 1));
	tableauProp->push_back(new CartePropriete("Nom Prop 6", 120, 8, "Bleu clair", 1));
	tableauProp->push_back(new CartePropriete("Nom Prop 7", 140, 10, "Violet", 1));
	tableauProp->push_back(new CartePropriete("Nom Prop 8", 150, 10, "Noir", 3));
	tableauProp->push_back(new CartePropriete("Nom Prop 9", 140, 10, "Violet", 1));
	tableauProp->push_back(new CartePropriete("Nom Prop 10", 160, 12, "Violet", 1));
	tableauProp->push_back(new CartePropriete("Nom Prop 11", 200, 25, "Noir", 2));
	tableauProp->push_back(new CartePropriete("Nom Prop 12", 180, 14, "Orange", 1));
	tableauProp->push_back(new CartePropriete("Nom Prop 13", 180, 14, "Orange", 1));
	tableauProp->push_back(new CartePropriete("Nom Prop 14", 200, 16, "Orange", 1));
	tableauProp->push_back(new CartePropriete("Nom Prop 15", 220, 18, "Rouge", 1));
	tableauProp->push_back(new CartePropriete("Nom Prop 16", 220, 18, "Rouge", 1));
	tableauProp->push_back(new CartePropriete("Nom Prop 17", 240, 20, "Rouge", 1));
	tableauProp->push_back(new CartePropriete("Nom Prop 18", 200, 25, "Noir", 2));
	tableauProp->push_back(new CartePropriete("Nom Prop 19", 260, 22, "Jaune", 1));
	tableauProp->push_back(new CartePropriete("Nom Prop 20", 260, 22, "Jaune", 1));
	tableauProp->push_back(new CartePropriete("Nom Prop 21", 150, 10, "Noir", 3));
	tableauProp->push_back(new CartePropriete("Nom Prop 22", 280, 24, "Jaune", 1));
	tableauProp->push_back(new CartePropriete("Nom Prop 23", 300, 26, "Vert", 1));
	tableauProp->push_back(new CartePropriete("Nom Prop 24", 300, 26, "Vert", 1));
	tableauProp->push_back(new CartePropriete("Nom Prop 25", 320, 28, "Vert", 1));
	tableauProp->push_back(new CartePropriete("Nom Prop 26", 200, 25, "Noir", 2));
	tableauProp->push_back(new CartePropriete("Nom Prop 27", 350, 35, "Bleu foncé", 1));
	tableauProp->push_back(new CartePropriete("Nom Prop 28", 400, 50, "Bleu foncé", 1));

	//Afficher les cartes
	for (int i = 0; i < 28; i++) {
		tableauProp[i];
	}

}

