#pragma once
#include "CartesPropriete.h"
#include "Pioche.h"
#include "Joueur.h"

class Case
{
private:
	int positionPlateau;
public:
	Case(int positionPlateau);
	void setPosPlateau(int positionPlateau) { this->positionPlateau = positionPlateau; }
	virtual void actionCase(Joueur* joueur, Pioche* piochePotCommun, Pioche* piocheAmnesie, CartePropriete* carteProp) {}
};

class CasePropriete : public Case{
private:
	CartePropriete* carteProp;
public:
	CasePropriete(int positionPlateau, CartePropriete* carteProp);
	virtual void actionCase(Joueur* joueur, Pioche* piochePotCommun, Pioche* piocheAmnesie, CartePropriete* carteProp);
};

class CasePotCommun : public Case {
public:
	void actionCase(Joueur* joueur, Pioche* piochePotCommun, Pioche* piocheAmnesie, CartePropriete* carteProp);
	CasePotCommun(int positionTableau);
};

class CasePackEpsi : public Case {
public:
	CasePackEpsi(int positionTableau);
	virtual void actionCase(Joueur* joueur, Pioche* piochePotCommun, Pioche* piocheAmnesie, CartePropriete* carteProp);
};

class CaseAmnesie : public Case {
public:
	CaseAmnesie(int positionTableau);
	virtual void actionCase(Joueur* joueur, Pioche* piochePotCommun, Pioche* piocheAmnesie, CartePropriete* carteProp);
};

class CaseStart : public Case {
public:
	CaseStart(int positionTableau);
	virtual void actionCase(Joueur* joueur, Pioche* piochePotCommun, Pioche* piocheAmnesie, CartePropriete* carteProp);
};

class CaseAdmin : public Case {
public:
	CaseAdmin(int positionTableau);
	virtual void actionCase(Joueur* joueur, Pioche* piochePotCommun, Pioche* piocheAmnesie, CartePropriete* carteProp);
};

class CaseParc : public Case {
public:
	CaseParc(int positionTableau);
	virtual void actionCase(Joueur* joueur, Pioche* piochePotCommun, Pioche* piocheAmnesie, CartePropriete* carteProp);
};

class CaseRetard : public Case {
public:
	CaseRetard(int positionTableau);
	virtual void actionCase(Joueur* joueur, Pioche* piochePotCommun, Pioche* piocheAmnesie, CartePropriete* carteProp);
};
class CaseBDE : public Case {
public:
	CaseBDE(int positionTableau);
	virtual void actionCase(Joueur* joueur, Pioche* piochePotCommun, Pioche* piocheAmnesie, CartePropriete* carteProp);
};
