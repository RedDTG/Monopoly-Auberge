#include "PiocheProprietes.h"

PiocheProprietes::PiocheProprietes() {
	this->PiocheProp.push_back(new CartePropriete("Carouf", 60, 2, "Marron", 1, 4));
	this->PiocheProp.push_back(new CartePropriete("Inter", 60, 4, "Marron", 1, 4));
	this->PiocheProp.push_back(new CartePropriete("EPSI", 200, 25, "Gare", 2, 15));
	this->PiocheProp.push_back(new CartePropriete("Coeur de ble", 100, 6, "Bleu clair", 1, 3));
	this->PiocheProp.push_back(new CartePropriete("Brioche doree", 100, 6, "Bleu clair", 1, 3));
	this->PiocheProp.push_back(new CartePropriete("Debote", 120, 8, "Bleu clair", 1, 3));
	this->PiocheProp.push_back(new CartePropriete("Espace de co-working", 140, 10, "Rose", 1, 5));
	this->PiocheProp.push_back(new CartePropriete("La boite qui apprend", 150, 10, "Compagnie Electrique", 3, 15));
	this->PiocheProp.push_back(new CartePropriete("Cafet ", 140, 10, "Rose", 1, 5));
	this->PiocheProp.push_back(new CartePropriete("Salle Gamecube", 160, 12, "Rose", 1, 5));
	this->PiocheProp.push_back(new CartePropriete("Warehouse", 200, 25, "Gare", 2, 15));
	this->PiocheProp.push_back(new CartePropriete("O'Tacos", 180, 14, "Orange", 1, 6));
	this->PiocheProp.push_back(new CartePropriete("Tonton Burger", 180, 14, "Orange", 1, 6));
	this->PiocheProp.push_back(new CartePropriete("KFC", 200, 16, "Orange", 1, 6));
	this->PiocheProp.push_back(new CartePropriete("Ligne C5", 220, 18, "Rouge", 1, 12));
	this->PiocheProp.push_back(new CartePropriete("Ligne 4", 220, 18, "Rouge", 1, 12));
	this->PiocheProp.push_back(new CartePropriete("Ligne 1", 240, 20, "Rouge", 1, 12));
	this->PiocheProp.push_back(new CartePropriete("Chez DHB", 200, 25, "Gare", 2, 15));
	this->PiocheProp.push_back(new CartePropriete("Katorza Cinema", 260, 22, "Jaune", 1, 14));
	this->PiocheProp.push_back(new CartePropriete("Pathe Gaumont", 260, 22, "Jaune", 1, 14));
	this->PiocheProp.push_back(new CartePropriete("Beecome", 150, 10, "Comagnie des Eaux", 3, 15));
	this->PiocheProp.push_back(new CartePropriete("Pathe Atlantis", 280, 24, "Jaune", 1, 14));
	this->PiocheProp.push_back(new CartePropriete("Game Over", 300, 26, "Vert", 1, 10));
	this->PiocheProp.push_back(new CartePropriete("Tabarnak", 300, 26, "Vert", 1, 10));
	this->PiocheProp.push_back(new CartePropriete("Meltdown", 320, 28, "Vert", 1, 10));
	this->PiocheProp.push_back(new CartePropriete("Auberge", 200, 25, "Gare", 2, 15));
	this->PiocheProp.push_back(new CartePropriete("MyDIL", 350, 35, "Bleu fonce", 1, 1));
	this->PiocheProp.push_back(new CartePropriete("Salle reseau", 400, 50, "Bleu fonce", 1, 1));
}

void PiocheProprietes::afficherPiocheProp() {
	//Afficher les cartes
	for (int i = 0; i < 28; i++) {
		this->PiocheProp[i]->afficherCarteProp();
	}
}

vector<CartePropriete*> PiocheProprietes::getPiocheProp() {
	return this->PiocheProp;
}