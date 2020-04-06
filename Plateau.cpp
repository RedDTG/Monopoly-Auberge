#include <algorithm>
#include <string>
#include <iostream>
#include "plateau.h"
#include "Case.h"
using namespace std;

plateau::plateau() {
	Case* uneCase = new Case();
	this->tableau.push_back(uneCase);
}


void plateau::afficherPlateau() {
	cout << "\n\n\n" << endl;
	cout << "     +-------------------------------------------------------------------------------------------+     " << endl;
	cout << "     | BALADE  | Ligne |Amnesie| Ligne | Ligne | CHEZ  |Katorza| Pathe |Beecome| Pathe | ARRIVEE |     " << endl;
	cout << "     |  PONT   |  C5   |  ???  |   4   |   1   |  DHB  |Cinema |Gaumont|       |Atlntis|EN RETARD|     " << endl;
	cout << "     |         |       |       |       |       |       |       |       |       |       |         |     " << endl;
	cout << "     |---------+-------+-------+-------+-------+-------+-------+-------+-------+-------+---------|     " << endl;
	cout << "     |   KFC   |                                                                       |Game Over|     " << endl;
	cout << "     |         |                                                                       |         |     " << endl;
	cout << "     |---------+                                                                       +---------|     " << endl;
	cout << "     |T. Burger|                                                                       |Tabarnak |     " << endl;
	cout << "     |         |                                                                       |         |     " << endl;
	cout << "     |---------+                                                                       +---------|     " << endl;
	cout << "     |Pot Comm.|                                                                       |Pot Comm.|     " << endl;
	cout << "     |         |                                                                       |         |     " << endl;
	cout << "     |---------+                                                                       +---------|     " << endl;
	cout << "     | O'Tacos |                                                                       |Meltdown |     " << endl;
	cout << "     |         |                                                                       |         |     " << endl;
	cout << "     |---------+                                                                       +---------|     " << endl;
	cout << "     |WAREHOUSE|                                                                       |L'AUBERGE|     " << endl;
	cout << "     |         |                                                                       |         |     " << endl;
	cout << "     |---------+                                                                       +---------|     " << endl;
	cout << "     |Salle GC |                                                                       | Amnesie |     " << endl;
	cout << "     |         |                                                                       |         |     " << endl;
	cout << "     |---------+                                                                       +---------|     " << endl;
	cout << "     |Cafeteria|                                                                       |  MyDIL  |     " << endl;
	cout << "     |         |                                                                       |         |     " << endl;
	cout << "     |---------+                                                                       +---------|     " << endl;
	cout << "     |MyLearBox|                                                                       |Taxe BDE |     " << endl;
	cout << "     |         |                                                                       |         |     " << endl;
	cout << "     |---------+                                                                       +---------|     " << endl;
	cout << "     |CoWorking|                                                                       |Salle 219|     " << endl;
	cout << "     |         |                                                                       |         |     " << endl;
	cout << "     |---------+-------+-------+-------+-------+-------+-------+-------+-------+-------+---------|     " << endl;
	cout << "     |         |Debote |Brioche|Amnesie| Coeur | EPSI  | Pack  | Inter |  Pot  |Carrouf|  START  |     " << endl;
	cout << "     |  ADMIN  |       | Dorée |  ???  |de ble |       | EPSI  |       |Commun |       | <------ |     " << endl;
	cout << "     |         |       |       |       |       |       |       |       |       |       |         |     " << endl;
	cout << "     +-------------------------------------------------------------------------------------------+     " << endl;
	cout << "\n\n\n" << endl;
}

//void retourPlateau(Joueur*) {
//	Joueur->location = 0;
//	Joueur->cagnotte += 200;
//}
