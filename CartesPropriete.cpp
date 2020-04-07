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

CartePropriete::CartePropriete(string nom, int prixAchat, int loyer, int type) {
	this->nom = nom;
	this->loyer = loyer;
	this->type = type;
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

int CartePropriete::getidCouleur() {
	return idcouleur;
}


Joueur* CartePropriete::getProprio() { return proprietaire; }
string CartePropriete::getNom() { return nom; }
int CartePropriete::getLoyer() { return loyer; }
int CartePropriete::getPrix() { return prixAchat; }
void CartePropriete::setProprio(Joueur* proprio) { this->proprietaire = proprio; }

void CartePropriete::setidCouleur(int idcouleur) {
	this->idcouleur = idcouleur;
}

string CartePropriete::getNomCouleur() {
	return NomCouleur;
}

void CartePropriete::setNomCouleur(string NomCouleur) {
	this->NomCouleur = NomCouleur;
}

Marron::Marron(string nom, int prixAchat, int loyer, string NomCouleur, int type, int idcouleur) : CartePropriete(nom, prixAchat, loyer, type) {
	setidCouleur(idcouleur);
	setNomCouleur(NomCouleur);
}
Gare::Gare(string nom, int prixAchat, int loyer, string NomCouleur, int type, int idcouleur) : CartePropriete(nom, prixAchat, loyer, type) {
	setidCouleur(idcouleur);
	setNomCouleur(NomCouleur);
}
Compagnie::Compagnie(string nom, int prixAchat, int loyer, string NomCouleur, int type, int idcouleur) : CartePropriete(nom, prixAchat, loyer, type) {
	setidCouleur(idcouleur);
	setNomCouleur(NomCouleur);
}
BleuClair::BleuClair(string nom, int prixAchat, int loyer, string NomCouleur, int type, int idcouleur) : CartePropriete(nom, prixAchat, loyer, type) {
	setidCouleur(idcouleur);
	setNomCouleur(NomCouleur);
}
Rose::Rose(string nom, int prixAchat, int loyer, string NomCouleur, int type, int idcouleur) : CartePropriete(nom, prixAchat, loyer, type) {
	setidCouleur(idcouleur);
	setNomCouleur(NomCouleur);
}
Orange::Orange(string nom, int prixAchat, int loyer, string NomCouleur, int type, int idcouleur) : CartePropriete(nom, prixAchat, loyer, type) {
	setidCouleur(idcouleur);
	setNomCouleur(NomCouleur);
}
Rouge::Rouge(string nom, int prixAchat, int loyer, string NomCouleur, int type, int idcouleur) : CartePropriete(nom, prixAchat, loyer, type) {
	setidCouleur(idcouleur);
	setNomCouleur(NomCouleur);
}
Jaune::Jaune(string nom, int prixAchat, int loyer, string NomCouleur, int type, int idcouleur) : CartePropriete(nom, prixAchat, loyer, type) {
	setidCouleur(idcouleur);
	setNomCouleur(NomCouleur);
}
Vert::Vert(string nom, int prixAchat, int loyer, string NomCouleur, int type, int idcouleur) : CartePropriete(nom, prixAchat, loyer, type) {
	setidCouleur(idcouleur);
	setNomCouleur(NomCouleur);
}
BleuFonce::BleuFonce(string nom, int prixAchat, int loyer, string NomCouleur, int type, int idcouleur) : CartePropriete(nom, prixAchat, loyer, type) {
	setidCouleur(idcouleur);
	setNomCouleur(NomCouleur);
}


