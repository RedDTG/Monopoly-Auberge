#include "Case.h"
#include "carteAction.h"
#include "CartesPropriete.h"
#include "Pioche.h"

Case::Case(int positionPlateau) {
	this->positionPlateau = positionPlateau;
}

void CaseAmnesie::actionCase(Joueur* joueur, Pioche* piocheAmnesie) {
	cout << "Vous piochez une carte Amnesie !" << endl;
	piocheAmnesie->tirerUneCarte(joueur);
}

void CasePotCommun::actionCase(Joueur* joueur, Pioche* piochePotCommun) {
	cout << "Vous piochez une carte Pot Commun !" << endl;
	piochePotCommun->tirerUneCarte(joueur);
}

void CaseStart::actionCase(Joueur* joueur) {
	cout << "Vous �tes sur la case d�part ! Vous vous 'reposez' en prenant un m�tre de shooter ! Vous perdez 30� !" << endl;
	joueur->setCagnotte(-30);
}

void CaseBDE::actionCase(Joueur* joueur) {
	cout << "Le BDE vous demande un ch�que de 40� pour organiser un week-end d'int�gration en Mai ! Votre g�n�rosit� vous perdra !" << endl;
	joueur->setCagnotte(-40);
}

void CaseParc::actionCase(Joueur* joueur) {
	cout << "Vous vous baladez tranquillement mais h�las vous passez sous le pont et vous vous faites racketer votre telephone. Il n'etait pourtant meme pas 21h... Vous perdez 100�." << endl;
	joueur->setCagnotte(-100);
}

void CaseRetard::actionCase(Joueur* joueur) {
	cout << "Vous arrivez en retard au cours de M. Reinold ! Passez par l'administration et restez-y 3 tours !" << endl;
	joueur->setPenalite(3);
}

void CasePackEpsi::actionCase(Joueur* joueur) {
	cout << "Oh non vous avez perdu vos identifiants Azure ! Ou alors vous ne les avez jamais eu, qui sait ? Dans tous les cas repayez le PackEPSI 100� !" << endl;
	joueur->setCagnotte(-100);
}

void CasePropriete::actionCase(Joueur* joueur, CartePropriete* carteProp) {
	cout << "Vous arrivez sur une case propri�t� !" << endl;
	carteProp->afficherCarteProp();

	if (!(carteProp->getProprio())) {
		cout << "Cette prorpi�t� n'a pas encore �t� achet�e ! Voulez-vous l'acheter ? Oui(1) ou Non(2)" << endl;
		int reponse;
		cin >> reponse;
		if (reponse == 1) {
			if (joueur->getCagnotte() > carteProp->getPrix()) {
				joueur->setCagnotte((0 - carteProp->getPrix()));
				carteProp->setProprio(joueur);
				//ajout de la carte dans la main du joueur
				cout << "Bravo ! Vous faites l'acquisition de : " << carteProp->getNom() << " !" << endl;
			}
			else {
				cout << "Vous n'avez pas assez d'argent pour acheter cette propriete !" << endl;
			}
		}
		else {
			cout << "Vous n'achetez pas cette propriete !" << endl;
		}
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

