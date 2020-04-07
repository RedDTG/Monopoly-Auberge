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
	int type;
	int prixAchat;
	//type 1 = Propriete
	//type 2 = gare 
	//type 3 = compagnies


public:
	CartePropriete(string nom, int prixAchat, int loyer, int type);

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


};

class Marron : public CartePropriete {
public:	
	Marron(string nom, int prixAchat, int loyer, string NomCouleur, int type, int idcouleur) : CartePropriete(nom,prixAchat,loyer,type) {}
};

class Gare : public CartePropriete {
public:
	Gare(string nom, int prixAchat, int loyer, string NomCouleur, int type, int idcouleur) : CartePropriete(nom, prixAchat, loyer, type) {}
};
class Compagnie : public CartePropriete {
public:
	Compagnie(string nom, int prixAchat, int loyer, string NomCouleur, int type, int idcouleur) : CartePropriete(nom, prixAchat, loyer, type) {}
};

class BleuClair : public CartePropriete {
public:
	BleuClair(string nom, int prixAchat, int loyer, string NomCouleur, int type, int idcouleur) : CartePropriete(nom, prixAchat, loyer, type) {}
};

class Rose : public CartePropriete {
public:
	Rose(string nom, int prixAchat, int loyer, string NomCouleur, int type, int idcouleur) : CartePropriete(nom, prixAchat, loyer, type) {}
};

class Orange : public CartePropriete {
public:
	Orange(string nom, int prixAchat, int loyer, string NomCouleur, int type, int idcouleur) : CartePropriete(nom, prixAchat, loyer, type) {}
};

class Rouge : public CartePropriete {
public:
	Rouge(string nom, int prixAchat, int loyer, string NomCouleur, int type, int idcouleur) : CartePropriete(nom, prixAchat, loyer, type) {}
};

class Jaune : public CartePropriete {
public:
	Jaune(string nom, int prixAchat, int loyer, string NomCouleur, int type, int idcouleur) : CartePropriete(nom, prixAchat, loyer, type) {}
};

class Vert : public CartePropriete {
public:
	Vert(string nom, int prixAchat, int loyer, string NomCouleur, int type, int idcouleur) : CartePropriete(nom, prixAchat, loyer, type) {}
};

class BleuFonce : public CartePropriete {
public:
	BleuFonce(string nom, int prixAchat, int loyer, string NomCouleur, int type, int idcouleur) : CartePropriete(nom, prixAchat, loyer, type) {}
};

