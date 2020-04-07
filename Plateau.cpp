#include <algorithm>
#include <string>
#include <iostream>
#include "plateau.h"
#include "Case.h"
#include "des.h"
#include "PiocheProprietes.h"
using namespace std;

plateau::plateau(vector<CartePropriete*> piocheProp) {
	this->ajouterCase(new CaseStart(0));
	this->ajouterCase(new CasePropriete(1, piocheProp.operator[](0)));
	this->ajouterCase(new CasePotCommun(2));
	this->ajouterCase(new CasePropriete(3, piocheProp.operator[](1)));
	this->ajouterCase(new CasePackEpsi(4));
	this->ajouterCase(new CasePropriete(5, piocheProp.operator[](2)));
	this->ajouterCase(new CasePropriete(6, piocheProp.operator[](3)));
	this->ajouterCase(new CaseAmnesie(7));
	this->ajouterCase(new CasePropriete(8, piocheProp.operator[](4)));
	this->ajouterCase(new CasePropriete(9, piocheProp.operator[](5)));

	this->ajouterCase(new CaseAdmin(10));
	this->ajouterCase(new CasePropriete(11, piocheProp.operator[](6)));
	this->ajouterCase(new CasePropriete(12, piocheProp.operator[](7)));
	this->ajouterCase(new CasePropriete(13, piocheProp.operator[](8)));
	this->ajouterCase(new CasePropriete(14, piocheProp.operator[](9)));
	this->ajouterCase(new CasePropriete(15, piocheProp.operator[](10)));
	this->ajouterCase(new CasePropriete(16, piocheProp.operator[](11)));
	this->ajouterCase(new CasePotCommun(17));
	this->ajouterCase(new CasePropriete(18, piocheProp.operator[](12)));
	this->ajouterCase(new CasePropriete(19, piocheProp.operator[](13)));

	this->ajouterCase(new CaseParc(20));
	this->ajouterCase(new CasePropriete(21, piocheProp.operator[](14)));
	this->ajouterCase(new CaseAmnesie(22));
	this->ajouterCase(new CasePropriete(23, piocheProp.operator[](15)));
	this->ajouterCase(new CasePropriete(24, piocheProp.operator[](16)));
	this->ajouterCase(new CasePropriete(25, piocheProp.operator[](17)));
	this->ajouterCase(new CasePropriete(26, piocheProp.operator[](18)));
	this->ajouterCase(new CasePropriete(27, piocheProp.operator[](19)));
	this->ajouterCase(new CasePropriete(28, piocheProp.operator[](20)));
	this->ajouterCase(new CasePropriete(29, piocheProp.operator[](21)));

	this->ajouterCase(new CaseRetard(30));
	this->ajouterCase(new CasePropriete(31, piocheProp.operator[](22)));
	this->ajouterCase(new CasePropriete(32, piocheProp.operator[](23)));
	this->ajouterCase(new CasePotCommun(33));
	this->ajouterCase(new CasePropriete(34, piocheProp.operator[](24)));
	this->ajouterCase(new CasePropriete(35, piocheProp.operator[](25)));
	this->ajouterCase(new CaseAmnesie(36));
	this->ajouterCase(new CasePropriete(37, piocheProp.operator[](26)));
	this->ajouterCase(new CaseBDE(38));
	this->ajouterCase(new CasePropriete(39, piocheProp.operator[](27)));
}

void plateau::ajouterCase(Case* laCase) {
	this->tableau.push_back(laCase);
}

void plateau::deplacement() {
	des* unDe = new des;
	int roll = unDe->jetDes();

}



void plateau::afficherPlateau() {
	cout << "\n\n\n" << endl;
	cout << "Voici le plateau de jeu, vous pourrez le revoir n'importe quand dans la partie. \n\n";
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
