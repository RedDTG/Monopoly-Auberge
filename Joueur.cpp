#include "Joueur.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <windows.h>
#include <time.h>
using namespace std;


void color(int t, int f)
{
    HANDLE H = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H, f * 16 + t);
}

Joueur::Joueur(int couleur)
{
    cagnotte = 1500;
    this->nom = nom;
    this->couleur = couleur + 1;
}

Joueur::~Joueur()
{
    //dtor
}

string Joueur::getNom()
{
    return nom;
}

int Joueur::getLocation()
{
    return location;
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

void Joueur::setLocation()
{

}

int Joueur::getCagnotte()
{
    return cagnotte;
}

int Joueur::getLocation()
{
    return location;
}

/*void Joueur::cartePropj()
{
    vector<CartePropriete*> MesProps; 

}
*/

void Joueur::afficher()
{
    color(this->couleur, 0);
    cout << "Nom:"<<this->nom << endl;
    cout << "Cagnotte : " << this->cagnotte << endl;
}
