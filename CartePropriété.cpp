#include "CartePropri�t�.h"
#include <iostream>
#include <string>

CartePropri�t�::CartePropri�t�()
{

}

void CartePropri�t�::Attribuer(string nom, int loyer, string Nomcouleur, int proprietaire) {
	this->nom = nom;
	this->loyer = loyer;
	this->Nomcouleur = Nomcouleur;
	this->proprietaire = 0;
}

