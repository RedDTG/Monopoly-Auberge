#include "Case.h"
#include "carteAction.h"
#include "CartesPropriete.h"

Case::Case(int positionPlateau) {
	this->positionPlateau = positionPlateau;
}

CasePropriete::CasePropriete(int positionPlateau, CartePropriete* carteProp) : Case(positionPlateau) {
	this->carteProp = carteProp;
}


void CaseAmnesie::actionCase(piocheAmnesie) {
	cout << "Vous piochez une carte Amnesie !" << endl;
	piocheAmnesie->tirerUneCarte();
}

void CasePotCommun::actionCase(piochePotCommun) {
	cout << "Vous piochez une carte Amnesie !" << endl;
	piochePotCommun->tirerUneCarte();
}

CaseStart::CaseStart(int positionPlateau) : Case(positionPlateau) {
}
CaseAdmin::CaseAdmin(int positionPlateau) : Case(positionPlateau) {
}
CaseRetard::CaseRetard(int positionPlateau) : Case(positionPlateau) {
}
CaseParc::CaseParc(int positionPlateau) : Case(positionPlateau) {
}
