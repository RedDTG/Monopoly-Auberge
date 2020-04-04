#include <algorithm>
#include <string>
#include <iomanip>
#include "plateau.h"
#include <vector>

class Grille{
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
}

int main()
{
	Grille grille(10, 10) :

	cout << grille.recuperer(4, 4) << endl;

	return 0;
}