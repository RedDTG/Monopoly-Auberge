#pragma once
#include <string>
#include <iostream>
using namespace std;

class CartePropriete
{
private:
	string nom;
	int loyer;
	string NomCouleur;
	string proprietaire;
	int idcouleur;
	int prixAchat;
	int groupe;

public:
	CartePropriete(string nom, int prixAchat, int loyer);
	void afficherCarteProp();
	void setProprio(string proprio);
	void setidCouleur(int idcouleur);
	int getidCouleur();
	int getPrix();
	string getProprio();
	string getNom();
	int getLoyer();
	void setNomCouleur(string NomCouleur);
	string getNomCouleur();
	int getGroupe();
	void setGroupe(int groupe);
};

class Marron : public CartePropriete {
public:	
	Marron(string nom, int prixAchat, int loyer);
};

class Gare : public CartePropriete {
public:
	Gare(string nom, int prixAchat, int loyer);
};
class Compagnie : public CartePropriete {
public:
	Compagnie(string nom, int prixAchat, int loyer);
};

class BleuClair : public CartePropriete {
public:
	BleuClair(string nom, int prixAchat, int loyer);
};

class Rose : public CartePropriete {
public:
	Rose(string nom, int prixAchat, int loyer);
};

class Orange : public CartePropriete {
public:
	Orange(string nom, int prixAchat, int loyer);
};

class Rouge : public CartePropriete {
public:
	Rouge(string nom, int prixAchat, int loyer);
};

class Jaune : public CartePropriete {
public:
	Jaune(string nom, int prixAchat, int loyer);
};

class Vert : public CartePropriete {
public:
	Vert(string nom, int prixAchat, int loyer);
};

class BleuFonce : public CartePropriete {
public:
	BleuFonce(string nom, int prixAchat, int loyer);
};

