#include "CarteAction.h"


CarteAction::CarteAction(string titre, int argent, int deplacement, int penalite, string description) {
	this->titre = titre;
	this->effetArgent = argent;
	this->effetDeplacement = deplacement;
	this->penalite = penalite;
	this->description = description;
}

string CarteAction::getTitre() { return this->titre; }
int CarteAction::getEffetDeplacement() { return this->effetDeplacement; }
int CarteAction::getEffetArgent() { return this->effetArgent; }
int CarteAction::getPenalite() { return this->penalite; }
string CarteAction::getDescription() { return this->description; }

void CarteAction::afficherCarteAction() {
	cout << "## " << this->titre << " ##" << endl;
	cout << this->description << endl;
	cout << "Effet de deplacement : " << this->effetDeplacement << "     Effet d'argent : " << this->effetArgent << "     Penalite : " << this->penalite << endl;
	cout << endl;
}