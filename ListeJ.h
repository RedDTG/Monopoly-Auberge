#pragma once
#include "Joueur.h"
class ListeJ
{
private:
	vector<Joueur*> liste;

public:
	ListeJ();
	vector<Joueur*> getListe();
	void addJoueur(Joueur* joueur);
	void faillite(Joueur* joueur);
};

