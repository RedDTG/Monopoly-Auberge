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
	vector<CarteAction*>* getPioche();
	vector<CarteAction*>* getDefausse();
	void melangerPioche();
	void afficherPioche();
};
