#pragma once
#include<string>
#include<vector>
#include "CartesPropriete.h"
using namespace std;


class Bot
{
public:
	Bot(int couleur);
	void choisir_nombre();
	void afficherBot();
	void acheterCarte(int montant);
	vector<Bot*>* listeBot;

	int getLocalisation();
	int getCagnotte();

	void setCagnotte();
	void setLocalisation();

private:
	string nom;
	int cagnotte;
	char pion;
	string nomPion;
	int couleur;
	int localisation;

};

