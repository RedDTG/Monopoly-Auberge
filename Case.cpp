#include "Case.h"
#include "carteAction.h"
#include "CartesPropriete.h"
#include "Pioche.h"

Case::Case(int positionPlateau) {
	this->positionPlateau = positionPlateau;
}

void CaseAmnesie::actionCase(Joueur* joueur, Pioche* piochePotCommun, Pioche* piocheAmnesie/*, CartePropriete* carteProp*/) {
	cout << "Amnesie !" << endl;
	cout << "Vous piochez une carte Amnesie !" << endl;
	piocheAmnesie->tirerUneCarte(joueur);
}

void CasePotCommun::actionCase(Joueur* joueur, Pioche* piochePotCommun, Pioche* piocheAmnesie/*, CartePropriete* carteProp*/) {
	cout << "Pot Commun !" << endl;
	cout << "Vous piochez une carte Pot Commun !" << endl;
	piochePotCommun->tirerUneCarte(joueur);
}

void CaseStart::actionCase(Joueur* joueur, Pioche* piochePotCommun, Pioche* piocheAmnesie/*, CartePropriete* carteProp*/) {
	cout << "Depart !" << endl;
	cout << "Vous êtes sur la case depart ! Vous vous 'reposez' en prenant un metre de shooter ! Vous perdez 30 euros !" << endl;
	joueur->setCagnotte(-30);
}

void CaseBDE::actionCase(Joueur* joueur, Pioche* piochePotCommun, Pioche* piocheAmnesie/*, CartePropriete* carteProp*/) {
	cout << "Cotisation BDE !" << endl;
	cout << "Le BDE vous demande un chèque de 40 euros pour organiser un week-end d'integration en Mai ! Votre generosite vous perdra !" << endl;
	joueur->setCagnotte(-40);
}

void CaseParc::actionCase(Joueur* joueur, Pioche* piochePotCommun, Pioche* piocheAmnesie/*, CartePropriete* carteProp*/) {
	cout << "Balade sous le pont !" << endl;
	cout << "Vous vous baladez tranquillement mais helas vous passez sous le pont et vous vous faites racketer votre telephone. Il n'etait pourtant meme pas 21h... Vous perdez 100 euros." << endl;
	joueur->setCagnotte(-100);
}

void CaseRetard::actionCase(Joueur* joueur, Pioche* piochePotCommun, Pioche* piocheAmnesie/*, CartePropriete* carteProp*/) {
	cout << "Retard en cours !" << endl;
	cout << "Vous arrivez en retard au cours de M. Reinold ! Passez par l'administration et restez-y 3 tours !" << endl;
	joueur->setPenalite(3);
}

void CasePackEpsi::actionCase(Joueur* joueur, Pioche* piochePotCommun, Pioche* piocheAmnesie/*, CartePropriete* carteProp*/) {
	cout << "Pack Epsi !" << endl;
	cout << "Oh non vous avez perdu vos identifiants Azure ! Ou alors vous ne les avez jamais eu, qui sait ? Dans tous les cas repayez le PackEPSI 100 euros !" << endl;
	joueur->setCagnotte(-100);
}

void CasePropriete::actionCase(Joueur* joueur, Pioche* piochePotCommun, Pioche* piocheAmnesie/*, CartePropriete* carteProp*/) {
	cout << "UNE CARTE PROPRIETE" << endl;
	/*cout << carteProp->getNom << endl;
	carteProp->afficherCarteProp();
	if (carteProp->getProprio() == "0") {
		cout << "Cette propriete n'a pas encore été achetée ! Voulez-vous l'acheter ? Oui(1) ou Non(2)" << endl;
		int reponse;
		cin >> reponse;
		if (reponse == 1) {
			if (joueur->getCagnotte() > carteProp->getPrix()) {
				joueur->setCagnotte((0 - carteProp->getPrix()));
				carteProp->setProprio(joueur->getNom());
				joueur->addCarteProp(carteProp);
				cout << "Bravo ! Vous faites l'acquisition de : " << carteProp->getNom() << " !" << endl;
			}
			else { cout << "Vous n'avez pas assez d'argent pour acheter cette propriete !" << endl; }
		}
		else { cout << "Vous n'achetez pas cette propriete !" << endl; }
	}
	else {
		int loyer;
		loyer = carteProp->getLoyer();
		cout << "Cette propriete appartient a " << carteProp->getProprio() << endl;
		cout << "Vous devez donc payer le loyer correspondant !" << endl;
		if (joueur->detectionGroupe(carteProp->getNomCouleur(), carteProp->getGroupe())) {
			loyer = loyer * 2;
			cout << "Il possede le groupe complet ! Vous payez double !" << endl;
		}
		joueur->setCagnotte((0 - loyer));
		cout << "Vous perdez donc " << loyer << "€ !" << endl;
	}*/
}

void CaseAdmin::actionCase(Joueur* joueur, Pioche* piochePotCommun, Pioche* piocheAmnesie/*, CartePropriete* carteProp*/) {
	cout << "Administration !" << endl;
	cout << "Après avoir reçu un mail, vous passez à l'administration. Heureusement c'etait une erreur et vous ne passez qu'en tant que simple visiteur !" << endl;
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

