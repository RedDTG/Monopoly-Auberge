#include "Joueur.h"
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;
Joueur::Joueur()
{
    cagnotte = 1500;
    this->nom = nom;
}

Joueur::~Joueur()
{
    //dtor
}

string Joueur::getNom()
{
    return nom;
}

void Joueur::choisir_nom()
{
    cout << "Combien de joueur etes vous : ";
    int nbrJoueur(0);
    cin >> nbrJoueur;
    if (nbrJoueur < 8) {
        cout << "Vous etes " << nbrJoueur << " joueurs !\n" << endl;
        for (int i = 0; i < nbrJoueur; i++) {
            cout << "Entrer votre nom : ";
            string nom;
            cin >> nom;
            cout << "votre nom est : \n" << nom << endl;
            system("cls");

        }
    }
    else if (nbrJoueur > 8) {
        cout << "Vous etes trop\n Relancez le jeu et choisissez un nombre de joueur inférieur ou égale à 8" << endl;

    }

}

void Joueur::setPion()
{

}

void Joueur::setNomPion()
{

}

void Joueur::setCagnotte()
{

}

int Joueur::getCagnotte()
{
    return cagnotte;
}

void Joueur::afficher()
{
    cout << "Nom:"<<this->nom << endl;
}
