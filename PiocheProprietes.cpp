#include "PiocheProprietes.h"

PiocheProprietes::PiocheProprietes() {
	this->PiocheProp.push_back(new Marron("Carouf", 60, 2, "Marron", 1, 4));
	this->PiocheProp.push_back(new Marron("Inter", 60, 4, "Marron", 1, 4));
	this->PiocheProp.push_back(new Gare("EPSI", 200, 25, "Noir", 2, 15));
	this->PiocheProp.push_back(new BleuClair("Coeur de ble", 100, 6, "Bleu clair", 1, 3));
	this->PiocheProp.push_back(new BleuClair("Brioche doree", 100, 6, "Bleu clair", 1, 3));
	this->PiocheProp.push_back(new BleuClair("Debote", 120, 8, "Bleu clair", 1, 3));
	this->PiocheProp.push_back(new Rose("Espace de co-working", 140, 10, "Rose", 1, 5));
	this->PiocheProp.push_back(new Compagnie("La boite qui apprend", 150, 10, "Noir", 3, 15));
	this->PiocheProp.push_back(new Rose("Cafet ", 140, 10, "Rose", 1, 5));
	this->PiocheProp.push_back(new Rose("Salle Gamecube", 160, 12, "Rose", 1, 5));
	this->PiocheProp.push_back(new Gare("Warehouse", 200, 25, "Noir", 2, 15));
	this->PiocheProp.push_back(new Orange("O'Tacos", 180, 14, "Orange", 1, 6));
	this->PiocheProp.push_back(new Orange("Tonton Burger", 180, 14, "Orange", 1, 6));
	this->PiocheProp.push_back(new Orange("KFC", 200, 16, "Orange", 1, 6));
	this->PiocheProp.push_back(new Rouge("Ligne C5", 220, 18, "Rouge", 1, 12));
	this->PiocheProp.push_back(new Rouge("Ligne 4", 220, 18, "Rouge", 1, 12));
	this->PiocheProp.push_back(new Rouge("Ligne 1", 240, 20, "Rouge", 1, 12));
	this->PiocheProp.push_back(new Gare("Chez DHB", 200, 25, "Noir", 2, 15));
	this->PiocheProp.push_back(new Jaune("Katorza Cinema", 260, 22, "Jaune", 1, 14));
	this->PiocheProp.push_back(new Jaune("Pathe Gaumont", 260, 22, "Jaune", 1, 14));
	this->PiocheProp.push_back(new Compagnie("Beecome", 150, 10, "Noir", 3, 15));
	this->PiocheProp.push_back(new Jaune("Pathe Atlantis", 280, 24, "Jaune", 1, 14));
	this->PiocheProp.push_back(new Vert("Game Over", 300, 26, "Vert", 1, 10));
	this->PiocheProp.push_back(new Vert("Tabarnak", 300, 26, "Vert", 1, 10));
	this->PiocheProp.push_back(new Vert("Meltdown", 320, 28, "Vert", 1, 10));
	this->PiocheProp.push_back(new Gare("Auberge", 200, 25, "Noir", 2, 15));
	this->PiocheProp.push_back(new BleuFonce("MyDIL", 350, 35, "Bleu fonce", 1, 1));
	this->PiocheProp.push_back(new BleuFonce("Salle reseau", 400, 50, "Bleu fonce", 1, 1));
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