#include "Case.h"
#include "carteAction.h"

Case::Case() {
	
}

CaseAmnesie::actionCase(Joueur*) {
	cout << "Vous piochez une carte Amnesie !" << endl;
	piocheAmnesie->tirerUneCarte;
}