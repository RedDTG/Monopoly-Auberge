#include "Case.h"
#include "carteAction.h"

Case::Case(int positionPlateau) {
	this->positionPlateau = positionPlateau;
}

void CaseAmnesie::actionCase(Joueur* joueur, Pioche* piochePotCommun, Pioche* piocheAmnesie, PiocheProprietes* piocheProp, ListeJ* listeJoueurs) {
	cout << "Amnesie !" << endl;
	cout << "Vous piochez une carte Amnesie !" << endl;
	piocheAmnesie->tirerUneCarte(joueur);
}

void CasePotCommun::actionCase(Joueur* joueur, Pioche* piochePotCommun, Pioche* piocheAmnesie, PiocheProprietes* piocheProp, ListeJ* listeJoueurs) {
	cout << "Pot Commun !" << endl;
	cout << "Vous piochez une carte Pot Commun !" << endl;
	piochePotCommun->tirerUneCarte(joueur);
}

void CaseStart::actionCase(Joueur* joueur, Pioche* piochePotCommun, Pioche* piocheAmnesie, PiocheProprietes* piocheProp, ListeJ* listeJoueurs) {
	cout << "Depart !" << endl;
	cout << "Vous êtes sur la case depart ! Vous vous 'reposez' en prenant un metre de shooter ! Vous perdez 30 euros !" << endl;
	joueur->setCagnotte(-30);
	if (joueur->getCagnotte() <= 0) { listeJoueurs->faillite(joueur); }
}

void CaseBDE::actionCase(Joueur* joueur, Pioche* piochePotCommun, Pioche* piocheAmnesie, PiocheProprietes* piocheProp, ListeJ* listeJoueurs) {
	cout << "Cotisation BDE !" << endl;
	cout << "Le BDE vous demande un chèque de 40 euros pour organiser un week-end d'integration en Mai ! Votre generosite vous perdra !" << endl;
	joueur->setCagnotte(-40);
	if (joueur->getCagnotte() <= 0) { listeJoueurs->faillite(joueur); }
}

void CaseParc::actionCase(Joueur* joueur, Pioche* piochePotCommun, Pioche* piocheAmnesie, PiocheProprietes* piocheProp, ListeJ* listeJoueurs) {
	cout << "Balade sous le pont !" << endl;
	cout << "Vous vous baladez tranquillement mais helas vous passez sous le pont et vous vous faites racketer votre telephone. Il n'etait pourtant meme pas 21h... Vous perdez 100 euros." << endl;
	joueur->setCagnotte(-100);
	if (joueur->getCagnotte() <= 0) { listeJoueurs->faillite(joueur); }
}

void CaseRetard::actionCase(Joueur* joueur, Pioche* piochePotCommun, Pioche* piocheAmnesie, PiocheProprietes* piocheProp, ListeJ* listeJoueurs) {
	cout << "Retard en cours !" << endl;
	cout << "Vous arrivez en retard au cours de M. Reinold ! Passez par l'administration et restez-y 3 tours !" << endl;
	joueur->setPenalite(3);
}

void CasePackEpsi::actionCase(Joueur* joueur, Pioche* piochePotCommun, Pioche* piocheAmnesie, PiocheProprietes* piocheProp, ListeJ* listeJoueurs) {
	cout << "Pack Epsi !" << endl;
	cout << "Oh non vous avez perdu vos identifiants Azure ! Ou alors vous ne les avez jamais eu, qui sait ? Dans tous les cas repayez le PackEPSI 100 euros !" << endl;
	joueur->setCagnotte(-100);
	if (joueur->getCagnotte() <= 0) { listeJoueurs->faillite(joueur); }
}

void CasePropriete::actionCase(Joueur* joueur, Pioche* piochePotCommun, Pioche* piocheAmnesie, PiocheProprietes* piocheProp, ListeJ* listeJoueurs) {
	CartePropriete* laCaseProp = this->testProp(joueur->getLocalisation(), piocheProp);
	cout << laCaseProp->getNom() << endl;

	laCaseProp->afficherCarteProp();
	if (laCaseProp->getProprio() == "0") {
		cout << "Cette propriete n'a pas encore ete achetee !" << endl;
		cout << "Voulez - vous l'acheter ? Oui(1) ou Non(2)" << endl;
		cout << "Vous avez " << joueur->getCagnotte() << endl;
		int reponse;
		cin >> reponse;
		if (reponse == 1) {
			if (joueur->getCagnotte() > laCaseProp->getPrix()) {
				joueur->setCagnotte((0 - laCaseProp->getPrix()));
				laCaseProp->setProprio(joueur->getNom());
				joueur->addCarteProp(laCaseProp);
				cout << "Bravo ! Vous faites l'acquisition de : " << laCaseProp->getNom() << " !" << endl;
				if (joueur->getCagnotte() <= 0) { listeJoueurs->faillite(joueur); }

			}
			else { cout << "Vous n'avez pas assez d'argent pour acheter cette propriete !" << endl; }
		}
		else { cout << "Vous n'achetez pas cette propriete !" << endl; }
	}
	else {
		int loyer;
		loyer = laCaseProp->getLoyer();
		cout << "Cette propriete appartient a " << laCaseProp->getProprio() << endl;
		cout << "Vous devez donc payer le loyer correspondant !" << endl;
		if (joueur->detectionGroupe(laCaseProp->getNomCouleur(), laCaseProp->getGroupe())) {
			loyer = loyer * 2;
			cout << "Il possede le groupe complet ! Vous payez double !" << endl;
		}
		joueur->setCagnotte((0 - loyer));
		cout << "Vous perdez donc " << loyer << " euros !" << endl;
		if (joueur->getCagnotte() <= 0) { listeJoueurs->faillite(joueur); }
	}
}

void CaseAdmin::actionCase(Joueur* joueur, Pioche* piochePotCommun, Pioche* piocheAmnesie, PiocheProprietes* piocheProp, ListeJ* listeJoueurs) {
	cout << "Administration !" << endl;
	cout << "Après avoir reçu un mail, vous passez à l'administration. Heureusement c'etait une erreur et vous ne passez qu'en tant que simple visiteur !" << endl;
}

CartePropriete* Case::testProp(int loc, PiocheProprietes* piocheProp) {
	switch (loc) {
	case 1:
		return piocheProp->getPiocheProp()[0];
		break;
	case 3:
		return piocheProp->getPiocheProp()[1];
		break;
	case 5:
		return piocheProp->getPiocheProp()[2];
		break;
	case 6:
		return piocheProp->getPiocheProp()[3];
		break;
	case 8:
		return piocheProp->getPiocheProp()[4];
		break;
	case 9:
		return piocheProp->getPiocheProp()[5];
		break;
	case 11:
		return piocheProp->getPiocheProp()[6];
		break;
	case 12:
		return piocheProp->getPiocheProp()[7];
		break;
	case 13:
		return piocheProp->getPiocheProp()[8];
		break;
	case 14:
		return piocheProp->getPiocheProp()[9];
		break;
	case 15:
		return piocheProp->getPiocheProp()[10];
		break;
	case 16:
		return piocheProp->getPiocheProp()[11];
		break;
	case 18:
		return piocheProp->getPiocheProp()[12];
		break;
	case 19:
		return piocheProp->getPiocheProp()[13];
		break;
	case 21:
		return piocheProp->getPiocheProp()[14];
		break;
	case 23:
		return piocheProp->getPiocheProp()[15];
		break;
	case 24:
		return piocheProp->getPiocheProp()[16];
		break;
	case 25:
		return piocheProp->getPiocheProp()[17];
		break;
	case 26:
		return piocheProp->getPiocheProp()[18];
		break;
	case 27:
		return piocheProp->getPiocheProp()[19];
		break;
	case 28:
		return piocheProp->getPiocheProp()[20];
		break;
	case 29:
		return piocheProp->getPiocheProp()[21];
		break;
	case 31:
		return piocheProp->getPiocheProp()[22];
		break;
	case 32:
		return piocheProp->getPiocheProp()[23];
		break;
	case 34:
		return piocheProp->getPiocheProp()[24];
		break;
	case 35:
		return piocheProp->getPiocheProp()[25];
		break;
	case 37:
		return piocheProp->getPiocheProp()[26];
		break;
	case 39:
		return piocheProp->getPiocheProp()[27];
		break;
	}
}

CasePropriete::CasePropriete(int positionPlateau, CartePropriete* carteProp) : Case(positionPlateau) { }
CaseStart::CaseStart(int positionPlateau) : Case(positionPlateau) { }
CaseAdmin::CaseAdmin(int positionPlateau) : Case(positionPlateau) { }
CaseRetard::CaseRetard(int positionPlateau) : Case(positionPlateau) { }
CaseParc::CaseParc(int positionPlateau) : Case(positionPlateau) { }
CasePackEpsi::CasePackEpsi(int positionPlateau) : Case(positionPlateau) { }
CaseAmnesie::CaseAmnesie(int positionPlateau) : Case(positionPlateau) { }
CasePotCommun::CasePotCommun(int positionPlateau) : Case(positionPlateau) { }
CaseBDE::CaseBDE(int positionPlateau) : Case(positionPlateau) { }

