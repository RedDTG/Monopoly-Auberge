#include "ListeJ.h"
ListeJ::ListeJ() {
	//this->liste.push_back(new Humain(0));
}

vector<Joueur*> ListeJ::getListe() { return this->liste; }

void ListeJ::addJoueur(Joueur* joueur) { this->liste.push_back(joueur); }

void ListeJ::faillite(Joueur* joueur) {
	this->getListe().erase(this->getListe().begin() + joueur->getNumero());

	for (int i = joueur->getNumero()+1; i < this->getListe().size(); i++) {
		cout << joueur->getNom() << " fait faillite est est retire de la partie !!" << endl;
		this->getListe()[i]->setNumero(this->getListe()[i]->getNumero() - 1);
	}
}