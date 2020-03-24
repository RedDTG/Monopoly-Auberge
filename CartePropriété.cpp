#include "CartePropriété.h"
#include <iostream>
#include <string>

CartePropriété::CartePropriété()
{

}

void CartePropriété::Attribuer(string nom, int loyer, string Nomcouleur, int proprietaire) {
	this->nom = nom;
	this->loyer = loyer;
	this->Nomcouleur = Nomcouleur;
	this->proprietaire = 0;
}

