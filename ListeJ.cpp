#include "ListeJ.h"
ListeJ::ListeJ() {
	//this->liste.push_back(new Humain(0));
}

vector<Joueur*> ListeJ::getListe() { return this->liste; }

void ListeJ::addJoueur(Joueur* joueur) { this->liste.push_back(joueur); }