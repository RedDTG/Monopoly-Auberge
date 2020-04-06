#pragma once
#include<string>
#include<vector>
using namespace std;


class Bot
{
public:
	Bot(int couleur);
	void choisir_nombre();
	void afficherBot();

private:
	string nom;
	int cagnotte;
	char pion;
	string nomPion;
	int couleur;

};

