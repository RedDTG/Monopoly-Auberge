#include <algorithm>
#include <string>
#include <iostream>
#include "plateau.h"

class Grille {
private:
	vector<Case*> plateau;


public:

	int recupererCase(int x) {
		return this->plateau;
	}
};

int main()
{
	Grille grille(10, 10) :

	cout << grille.recuperer(4, 4) << endl;

	return 0;
}