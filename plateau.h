#pragma once
#include <vector>

class plateau
{
private:
	int largeur = 8;
	int hauteur = 5;
	vector<int> tableau;


public:
	Grille(int largeur, int hauteur) {
		this->largeur = largeur;
		this->hauteur = hauteur;
		tableau.resize(largeur * hauteur, 0);
	}

	int recuperer(int x, int y) {
		return grille[y * largeur + x];
	}
};

class plateau
{
};

