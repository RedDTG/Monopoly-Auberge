#include "CartesPropriete.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <time.h>
#include <vector>
using namespace std;

void color(int t, int f)
{
	HANDLE H = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(H, f * 16 + t);
}

CartePropriete::CartePropriete(string nom, int prixAchat, int loyer, string Nomcouleur, int type, int idcouleur) {
	this->nom = nom;
	this->loyer = loyer;
	this->Nomcouleur = Nomcouleur;
	this->proprietaire = 0;
	this->type = type;
	this->idcouleur = idcouleur;
	this->prixAchat = prixAchat;
}

void CartePropriete::afficherCarteProp()
{
	color(this->idcouleur,0);
	cout << "\nNom de la carte : " << this->nom << endl;
	cout << "Prix de la propriete: " << this->prixAchat << endl;
	cout << "Prix du loyer : " << this->loyer << " |  Couleur : " << this->Nomcouleur << endl;
	cout << endl;
	color(15,0);
}

Joueur* CartePropriete::getProprio() { return proprietaire; }
string CartePropriete::getNom() { return nom; }
int CartePropriete::getLoyer() { return loyer; }
int CartePropriete::getPrix() { return prixAchat; }

void CartePropriete::setProprio(Joueur* proprio) { this->proprietaire = proprio; }