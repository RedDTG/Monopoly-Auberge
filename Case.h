#pragma once
#include "CartesPropriete.h"
#include "Joueur.h"
#include "Pioche.h"

class Case
{
private:
	int positionPlateau;
public:
	Case(int positionPlateau);
	void setPosPlateau(int positionPlateau) { this->positionPlateau = positionPlateau; }
};

class CasePropriete : public Case{
private:
	CartePropriete* carteProp;
public:
	CasePropriete(int positionPlateau, CartePropriete* carteProp);
	virtual void actionCase(Joueur* Joueur, CartePropriete* carteProp);
};

class CasePotCommun : public Case {
public:
	void actionCase(Joueur* joueur, Pioche* piochePotCommun);
	CasePotCommun(int positionTableau);
};

class CasePackEpsi : public Case {
public:
	CasePackEpsi(int positionTableau);
	virtual void actionCase(Joueur* Joueur);
};

class CaseAmnesie : public Case {
public:
	CaseAmnesie(int positionTableau);
	virtual void actionCase(Joueur* joueur, Pioche* piocheAmnesie);
};

class CaseStart : public Case {
public:
	CaseStart(int positionTableau);
	virtual void actionCase(Joueur* joueur);
};

class CaseAdmin : public Case {
public:
	CaseAdmin(int positionTableau);
	virtual void actionCase();
};

class CaseParc : public Case {
public:
	CaseParc(int positionTableau);
	virtual void actionCase(Joueur* joueur);
};

class CaseRetard : public Case {
public:
	CaseRetard(int positionTableau);
	virtual void actionCase(Joueur* joueur);
};
class CaseBDE : public Case {
public:
	CaseBDE(int positionTableau);
	virtual void actionCase(Joueur* joueur);
};
