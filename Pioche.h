#pragma once
#include <vector>
#include "CarteAction.h"
using namespace std;

class Pioche
{
private:
	vector<CarteAction*>* pioche;
	vector<CarteAction*>* defausse;

public:
	Pioche();
	vector<CarteAction*>* getPioche();
	vector<CarteAction*>* getDefausse();
	void ajoutCarte(CarteAction*);
	void melangerPioche();
	void afficherPioche();
};
