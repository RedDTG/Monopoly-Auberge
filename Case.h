#pragma once
#include "CartesPropriete.h"
#include "Pioche.h"
#include "Joueur.h"
#include "PiocheProprietes.h"
#include "ListeJ.h"

class Case
{
private:
	int positionPlateau;
public:
	Case(int positionPlateau);
	void setPosPlateau(int positionPlateau) { this->positionPlateau = positionPlateau; }
	virtual void actionCase(Joueur* joueur, Pioche* piochePotCommun, Pioche* piocheAmnesie, PiocheProprietes* piocheProp, ListeJ* listeJoueurs) { }
	CartePropriete* testProp(int loc, PiocheProprietes* piocheProp);
};

class CasePropriete : public Case{
private:
	CartePropriete* carteProp;
public:
	CasePropriete(int positionPlateau, CartePropriete* carteProp);
	virtual void actionCase(Joueur* joueur, Pioche* piochePotCommun, Pioche* piocheAmnesie, PiocheProprietes* piocheProp, ListeJ* listeJoueurs);
};

class CasePotCommun : public Case {
public:
	void actionCase(Joueur* joueur, Pioche* piochePotCommun, Pioche* piocheAmnesie, PiocheProprietes* piocheProp, ListeJ* listeJoueurs);
	CasePotCommun(int positionTableau);
};

class CasePackEpsi : public Case {
public:
	CasePackEpsi(int positionTableau);
	virtual void actionCase(Joueur* joueur, Pioche* piochePotCommun, Pioche* piocheAmnesie, PiocheProprietes* piocheProp, ListeJ* listeJoueurs);
};

class CaseAmnesie : public Case {
public:
	CaseAmnesie(int positionTableau);
	virtual void actionCase(Joueur* joueur, Pioche* piochePotCommun, Pioche* piocheAmnesie, PiocheProprietes* piocheProp, ListeJ* listeJoueurs);
};

class CaseStart : public Case {
public:
	CaseStart(int positionTableau);
	virtual void actionCase(Joueur* joueur, Pioche* piochePotCommun, Pioche* piocheAmnesie, PiocheProprietes* piocheProp, ListeJ* listeJoueurs);
};

class CaseAdmin : public Case {
public:
	CaseAdmin(int positionTableau);
	virtual void actionCase(Joueur* joueur, Pioche* piochePotCommun, Pioche* piocheAmnesie, PiocheProprietes* piocheProp, ListeJ* listeJoueurs);
};

class CaseParc : public Case {
public:
	CaseParc(int positionTableau);
	virtual void actionCase(Joueur* joueur, Pioche* piochePotCommun, Pioche* piocheAmnesie, PiocheProprietes* piocheProp, ListeJ* listeJoueurs);
};

class CaseRetard : public Case {
public:
	CaseRetard(int positionTableau);
	virtual void actionCase(Joueur* joueur, Pioche* piochePotCommun, Pioche* piocheAmnesie, PiocheProprietes* piocheProp, ListeJ* listeJoueurs);
};

class CaseBDE : public Case {
public:
	CaseBDE(int positionTableau);
	virtual void actionCase(Joueur* joueur, Pioche* piochePotCommun, Pioche* piocheAmnesie, PiocheProprietes* piocheProp, ListeJ* listeJoueurs);
};
