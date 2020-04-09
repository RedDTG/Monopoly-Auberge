#include <string>
#include <iostream>
#include "plateau.h"
#include "Case.h"
#include "PiocheProprietes.h"
#include "des.h"
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

void plateau::deplacement(Joueur* joueur, int deplacement) {
	if (deplacement > 0) {
		for (int i = 0; i < deplacement; i++) {
			joueur->setLocalisation((joueur->getLocalisation() + 1));
			if (joueur->getLocalisation() == (this->tableau.size())) {
				joueur->setLocalisation(0);
				joueur->setCagnotte(200);
				cout << "Vous passez par la case depart vous gagnez 200 euros !" << endl;
			}
		}
	}
	else if (deplacement < 0) {
		for (int i = 0; i > deplacement; i--) {
			joueur->setLocalisation((joueur->getLocalisation() - 1));
			if (joueur->getLocalisation() == 0) {
				joueur->setLocalisation(this->tableau.size() - 1);
			}
		}
	}
}

void plateau::deroulementTour(Joueur* joueur, Pioche* piocheAmnesie, Pioche* piochePotCommun, PiocheProprietes* piocheProp, ListeJ* listeJoueurs) {
	des* unDe = new des;
	int roll = (unDe->jetDes() + unDe->jetDes());
	this->deplacement(joueur, roll);
	cout << joueur->getNom() << " lance les des et fait " << roll << endl;
	cout << joueur->getNom() << " avance de " << roll << " cases et tombe sur la case ";
	this->tableau[joueur->getLocalisation()]->actionCase(joueur, piocheAmnesie, piochePotCommun, piocheProp, listeJoueurs);
}


void plateau::afficherPlateau() {
	cout << "\n\n\n" << endl;
	cout << "Voici le plateau de jeu, vous pourrez le revoir n'importe quand dans la partie. \n\n";
	cout << "     +-------------------------------------------------------------------------------------------+     " << endl;
	cout << "     | BALADE  | Ligne |Amnesie| Ligne | Ligne | CHEZ  |Katorza| Pathe |Beecome| Pathe | ARRIVEE |     " << endl;
	cout << "     |  PONT   |  C5   |  ???  |   4   |   1   |  DHB  |Cinema |Gaumont|       |Atlntis|EN RETARD|     " << endl;
	cout << "     |       20|     21|     22|     23|     24|     25|     26|     27|     28|     29|       30|     " << endl;
	cout << "     |---------+-------+-------+-------+-------+-------+-------+-------+-------+-------+---------|     " << endl;
	cout << "     |   KFC   |                                                                       |Game Over|     " << endl;
	cout << "     |       19|                                                                       |       31|     " << endl;
	cout << "     |---------+                                                                       +---------|     " << endl;
	cout << "     |T. Burger|                                                                       |Tabarnak |     " << endl;
	cout << "     |       18|                                                                       |       32|     " << endl;
	cout << "     |---------+                                                                       +---------|     " << endl;
	cout << "     |Pot Comm.|                                                                       |Pot Comm.|     " << endl;
	cout << "     |       17|                                                                       |       33|     " << endl;
	cout << "     |---------+                                                                       +---------|     " << endl;
	cout << "     | O'Tacos |                                                                       |Meltdown |     " << endl;
	cout << "     |       16|                                                                       |       34|     " << endl;
	cout << "     |---------+                                                                       +---------|     " << endl;
	cout << "     |WAREHOUSE|                                                                       |L'AUBERGE|     " << endl;
	cout << "     |       15|                                                                       |       35|     " << endl;
	cout << "     |---------+                                                                       +---------|     " << endl;
	cout << "     |Salle GC |                                                                       | Amnesie |     " << endl;
	cout << "     |       14|                                                                       |       36|     " << endl;
	cout << "     |---------+                                                                       +---------|     " << endl;
	cout << "     |Cafeteria|                                                                       |  MyDIL  |     " << endl;
	cout << "     |       13|                                                                       |       37|     " << endl;
	cout << "     |---------+                                                                       +---------|     " << endl;
	cout << "     |MyLearBox|                                                                       |Taxe BDE |     " << endl;
	cout << "     |       12|                                                                       |       38|     " << endl;
	cout << "     |---------+                                                                       +---------|     " << endl;
	cout << "     |CoWorking|                                                                       |Salle 219|     " << endl;
	cout << "     |       11|                                                                       |       39|     " << endl;
	cout << "     |---------+-------+-------+-------+-------+-------+-------+-------+-------+-------+---------|     " << endl;
	cout << "     |         |Debote |Brioche|Amnesie| Coeur | EPSI  | Pack  | Inter |  Pot  |Carrouf|  START  |     " << endl;
	cout << "     |  ADMIN  |       | Doree |  ???  |de ble |       | EPSI  |       |Commun |       | <------ |     " << endl;
	cout << "     |       10|      9|      8|      7|      6|      5|      4|      3|      2|      1|        0|     " << endl;
	cout << "     +-------------------------------------------------------------------------------------------+     " << endl;
	cout << "\n\n\n" << endl;
}

