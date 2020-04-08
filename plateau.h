#pragma once
#include <vector>
#include "Case.h"
using namespace std;

class plateau
{
private:
	vector<Case*> tableau;

public:
	
	plateau(vector<CartePropriete*> piocheProp);
	void afficherPlateau();
	void deplacement();
	void ajouterCase(Case* laCase);
	void annoncerCase(int localisation);
};


