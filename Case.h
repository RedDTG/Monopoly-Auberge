#pragma once
#include "CartesPropriete.h"
#include "Joueur.h"

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
	//virtual void actionCase();
};

class CasePotCommun : public Case {
public:
	void actionCase(piochePotCommun);
	CasePotCommun(int positionTableau);
};

class CasePackEpsi : public Case {
private:
	//int effetArgent;

public:
	CasePackEpsi(int positionTableau);
	//virtual void actionCase();
};

class CaseAmnesie : public Case {
public:
	CaseAmnesie(int positionTableau);
	void actionCase(piocheAmnesie);
};

class CaseStart : public Case {
public:
	CaseStart(int positionTableau);
	//virtual void actionCase();
};

class CaseAdmin : public Case {
public:
	CaseAdmin(int positionTableau);
	//virtual void actionCase();
};

class CaseParc : public Case {
public:
	CaseParc(int positionTableau);
	//virtual void actionCase();
};

class CaseRetard : public Case {
public:
	CaseRetard(int positionTableau);
	//virtual void actionCase();
};

class CaseBDE : public Case {
public:
	CaseBDE(int positionTableau);
	//virtual void actionCase();
};