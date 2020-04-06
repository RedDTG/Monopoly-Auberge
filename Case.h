#pragma once
class Case
{
private:
	int positionPlateau;
public:
	Case();
	//void actionCase(Joueur*);
};

class CasePropriete :Case {
private:


public:
	void actionCase(Joueur*);

};

class CasePotCommun :Case {
private:

public:

};

class CasePackEpsi :Case {
private:
	int effetArgent;

public:
	CasePackEpsi();

};

class CaseAmnesie :Case {
public:
	actionCase(Joueur*);
};

class CaseAmnesie :Case {
public:
	actionCase(Joueur*);
};