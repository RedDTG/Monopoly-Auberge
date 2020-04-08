#pragma once
#include <vector>
#include "Case.h"
#include "Joueur.h"
#include  "des.h"
using namespace std;

class plateau
{
private:
	vector<Case*> tableau;

public:
	
	plateau(vector<CartePropriete*> piocheProp);
	void afficherPlateau();
	void deplacement(Joueur* joueur, int deplacement);
	void ajouterCase(Case* laCase);
	void getCase(int localisation, Joueur* joueur, Pioche* piocheAmnesie, Pioche* piochePotCommun, CartePropriete* carteProp);
};

