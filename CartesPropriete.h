#pragma once
#include <string>
#include <iostream>
#include "Joueur.h"
using namespace std;

class CartePropriete
{
private:
	string nom;
	int loyer;
	string NomCouleur;
	Joueur* proprietaire;
	int idcouleur;
	int prixAchat;
	int groupe;


public:
  
	CartePropriete(string nom, int prixAchat, int loyer);
	void afficherCarteProp();
	void setProprio(Joueur* proprio);
	void setidCouleur(int idcouleur);
	int getidCouleur();
	int getPrix();
	Joueur* getProprio();
	string getNom();
	int getLoyer();
	void setNomCouleur(string NomCouleur);
	string getNomCouleur();
	int getGroupe();
	void setGroupe(int groupe);

};

class Marron : public CartePropriete {
public:	
	Marron(string nom, int prixAchat, int loyer) : CartePropriete(nom,prixAchat,loyer) {}
};

class Gare : public CartePropriete {
public:
	Gare(string nom, int prixAchat, int loyer) : CartePropriete(nom, prixAchat, loyer) {}
};
class Compagnie : public CartePropriete {
public:
	Compagnie(string nom, int prixAchat, int loyer) : CartePropriete(nom, prixAchat, loyer) {}
};

class BleuClair : public CartePropriete {
public:
	BleuClair(string nom, int prixAchat, int loyer) : CartePropriete(nom, prixAchat, loyer) {}
};

class Rose : public CartePropriete {
public:
	Rose(string nom, int prixAchat, int loyer) : CartePropriete(nom, prixAchat, loyer) {}
};

class Orange : public CartePropriete {
public:
	Orange(string nom, int prixAchat, int loyer) : CartePropriete(nom, prixAchat, loyer) {}
};

class Rouge : public CartePropriete {
public:
	Rouge(string nom, int prixAchat, int loyer) : CartePropriete(nom, prixAchat, loyer) {}
};

class Jaune : public CartePropriete {
public:
	Jaune(string nom, int prixAchat, int loyer) : CartePropriete(nom, prixAchat, loyer) {}
};

class Vert : public CartePropriete {
public:
	Vert(string nom, int prixAchat, int loyer) : CartePropriete(nom, prixAchat, loyer) {}
};

class BleuFonce : public CartePropriete {
public:
	BleuFonce(string nom, int prixAchat, int loyer) : CartePropriete(nom, prixAchat, loyer) {}
};

