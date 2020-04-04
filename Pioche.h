#pragma once
#include <vector>
#include "CarteAction.h"
using namespace std;

class Pioche
{
private:
	vector<CarteAction*> pioche;
	vector<CarteAction*> defausse;

public:
	//Pioche();

	void ajoutCarte(CarteAction*);
	void melangerPioche();
	void afficherPioche();
	void tirerUneCarte();
	void afficherDefausse();
	void reinitPioche();
	vector<CarteAction*> getPioche();
};

class PiocheAmnesie: public Pioche
{
public:
	PiocheAmnesie();
};

class PiochePotCommun : public Pioche
{
public:
	PiochePotCommun();
};