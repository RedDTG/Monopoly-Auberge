#include <algorithm>
#include <string>
#include <iostream>
#include "plateau.h"
#include "Case.h"
using namespace std;

plateau::plateau() {
	Case* uneCase = new Case();
	this->tableau.operator[](0) = uneCase;
}


void plateau::afficherPlateau() {
	cout << "\n\n\n" << endl;
	cout << "     +----------------------------------------------------------+         +-----------------------+ " << endl;
	cout << "     |BALADE| Rg | ?? | Rg | Rg |CHEZ| Ja | Ja |Bcme| Ja |RETARD|         |        LEGENDE        | " << endl;
	cout << "     | PONT |    |    |    |    |DHB |    |    |    |    |      |         +-----------------------+ " << endl;
	cout << "     |------+----+----+----+----+----+----+----+----+----+------|         | ?? : Amnesie          | " << endl;
	cout << "     |  Or  |                                            |  Ve  |         | PC : Pot Commun       | " << endl;
	cout << "     |------+                                            +------|         | PE : Pack EPSI        | " << endl;
	cout << "     |  Or  |                                            |  Ve  |         | BDE : Taxe BDE        | " << endl;
	cout << "     |------+                                            +------|         |                       | " << endl;
	cout << "     |  PC  |                                            |  PC  |         | Ma : Prop. Marron     | " << endl;
	cout << "     |------+                                            +------|         | Bc : Prop. Bleue Ciel | " << endl;
	cout << "     |  Or  |                                            |  Ve  |         | Rs : Prop Rose        | " << endl;
	cout << "     |------+                                            +------|         | Or : Prop. Orange     | " << endl;
	cout << "     |WARHSE|                                            |O'BERJ|         | Rg : Prop. Rouge      | " << endl;
	cout << "     |------+                                            +------|         | Ja : Porp. Jaune      | " << endl;
	cout << "     |  Rs  |                                            |  ??  |         | Ve : Prop. Verte      | " << endl;
	cout << "     |------+                                            +------|         | Bn : Prop. Bleue Nuit | " << endl;
	cout << "     |  Rs  |                                            |  Bn  |         |                       | " << endl;
	cout << "     |------+                                            +------|         | MyLB : Boite ki apren | " << endl;
	cout << "     | MyLB |                                            | BDE  |         | Bcme : Beecome        | " << endl;
	cout << "     |------+                                            +------|         |                       | " << endl;
	cout << "     |  Rs  |                                            |  Bn  |         | EPSI : EPSI           | " << endl;
	cout << "     |------+----+----+----+----+----+----+----+----+----+------|         | WARHSE : Warehouse    | " << endl;
	cout << "     |ADMIN | Bc | Bc | ?? | Bc |EPSI| PE | Ma | PC | Ma | <--- |         | CHEZ DHB : Chez DHB   | " << endl;
	cout << "     |      |    |    |    |    |    |    |    |    |    | START|         | O'BERJ : l'Auberge    | " << endl;
	cout << "     +----------------------------------------------------------+         +-----------------------+ " << endl;
	cout << "\n\n\n" << endl;
}

//void retourPlateau(Joueur*) {
//	Joueur->location = 0;
//	Joueur->cagnotte += 200;
//}
