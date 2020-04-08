#include "CartesPropriete.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <time.h>
#include <vector>
using namespace std;

void color2(int t, int f)
{
	HANDLE H = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(H, f * 16 + t);
}

CartePropriete::CartePropriete(string nom, int prixAchat, int loyer) {
	this->nom = nom;
	this->loyer = loyer;
	this->prixAchat = prixAchat;
	this->proprietaire = "0";
}

void CartePropriete::afficherCarteProp()
{
	color2(this->idcouleur,0);
	cout << "\nNom de la carte : " << this->nom << endl;
	cout << "Prix de la propriete: " << this->prixAchat << endl;

	cout << "Prix du loyer : " << this->loyer << " |  Couleur : " << this->NomCouleur << endl;

	cout << endl;
	color2(15,0);
}

int CartePropriete::getidCouleur() {
	return idcouleur;
}

void CartePropriete::setGroupe(int groupe) { this->groupe = groupe; }
int CartePropriete::getGroupe() { return this->groupe; }

string CartePropriete::getProprio() { return proprietaire; }
string CartePropriete::getNom() { return nom; }
int CartePropriete::getLoyer() { return loyer; }
int CartePropriete::getPrix() { return prixAchat; }
void CartePropriete::setProprio(string proprio) { this->proprietaire = proprio; }

void CartePropriete::setidCouleur(int idcouleur) {
	this->idcouleur = idcouleur;
}

string CartePropriete::getNomCouleur() {
	return NomCouleur;
}

void CartePropriete::setNomCouleur(string NomCouleur) {
	this->NomCouleur = NomCouleur;
}

Marron::Marron(string nom, int prixAchat, int loyer) : CartePropriete(nom, prixAchat, loyer) {
	this->setidCouleur(4);
	this->setNomCouleur("Marron");
	this->setGroupe(2);
}
Gare::Gare(string nom, int prixAchat, int loyer) : CartePropriete(nom, prixAchat, loyer) {
	this->setidCouleur(15);
	this->setNomCouleur("Gare");
	this->setGroupe(4);
}
Compagnie::Compagnie(string nom, int prixAchat, int loyer) : CartePropriete(nom, prixAchat, loyer) {
	this->setidCouleur(15);
	this->setNomCouleur("Compagnie");
	this->setGroupe(2);
}
BleuClair::BleuClair(string nom, int prixAchat, int loyer) : CartePropriete(nom, prixAchat, loyer) {
	this->setidCouleur(3);
	this->setNomCouleur("Bleu Clair");
	this->setGroupe(3);
}
Rose::Rose(string nom, int prixAchat, int loyer) : CartePropriete(nom, prixAchat, loyer) {
	this->setidCouleur(5);
	this->setNomCouleur("Rose");
	this->setGroupe(3);
}
Orange::Orange(string nom, int prixAchat, int loyer) : CartePropriete(nom, prixAchat, loyer) {
	this->setidCouleur(6);
	this->setNomCouleur("Orange");
	this->setGroupe(3);
}
Rouge::Rouge(string nom, int prixAchat, int loyer) : CartePropriete(nom, prixAchat, loyer) {
	this->setidCouleur(12);
	this->setNomCouleur("Rouge");
	this->setGroupe(3);
}
Jaune::Jaune(string nom, int prixAchat, int loyer) : CartePropriete(nom, prixAchat, loyer) {
	this->setidCouleur(14);
	this->setNomCouleur("Jaune");
	this->setGroupe(3);
}
Vert::Vert(string nom, int prixAchat, int loyer) : CartePropriete(nom, prixAchat, loyer) {
	this->setidCouleur(10);
	this->setNomCouleur("Vert");
	this->setGroupe(3);
}
BleuFonce::BleuFonce(string nom, int prixAchat, int loyer) : CartePropriete(nom, prixAchat, loyer) {
	this->setidCouleur(1);
	this->setNomCouleur("Bleu Fonce");
	this->setGroupe(2);
}
