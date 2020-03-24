#pragma once
#include <iostream>
#include <string>
using namespace std;

class CarteAction
{
private:
	string titre;
	int effetArgent;
	int effetDeplacement;
	int penalite;
	string description;

public:
	void initCarteAction(string titre, int argent, int deplacement, int penalite, string description);

	string getTitre();
	int getEffetDeplacement();
	int getEffetArgent();
	int getPenalite();
	string getDescription();

	void afficherCarteAction();
};


