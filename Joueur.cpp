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

Joueur::Joueur(vector<Joueur*>* listeJoueurs)
{
    cagnotte = 1500;
    cout << "Entrer votre nom : ";
    string nom;
    cin >> nom;
    this->nom = nom;
    this->couleur = couleur + 1;
    int numero = (listeJoueurs->size() + 1);
    cout << "votre nom est : " << this->nom << " et vous etes le joueur numero " << this->numero << ".\n" << endl;
    system("PAUSE");
    system("cls");
}

string Joueur::getNom() { return this->nom; }

int Joueur::getLocalisation() { return this->localisation; }

int Joueur::getPenalite() { return this->penalite; }

void Joueur::setCagnotte(int effetArgent) { this->cagnotte = cagnotte + effetArgent; }

void Joueur::addLocalisation(int effetDeplacement)
{
    if (effetDeplacement > 0) {
        for (int i = 0; i < effetDeplacement; i++) {
            this->localisation = localisation + 1;
            if (this->localisation == 40) {
                this->localisation = 0;
                this->cagnotte = cagnotte + 200;
                cout << "Vous passez par la case départ vous gagnez 200€ !" << endl;
            }
        }  
    }
    if (effetDeplacement < 0) {
        for (int i = 0; i > effetDeplacement; i--) {
            this->localisation = localisation - 1;
            if (this->localisation == 0) {
                this->localisation = 39;
            }
        }
    }
}

void Joueur::setLocalisation(int localisation) { this->localisation = localisation; }

int Joueur::getCagnotte() { return cagnotte; }

void Joueur::setPenalite(int penalite)
{
    this->setPenalite(penalite);
}


//void Joueur::addProp()
//{
//    //vector<CartePropriete*> MesProps; 
//
//}



void Joueur::afficher()
{
    color(this->couleur, 0);
    cout << "Nom:"<<this->nom << endl;
    cout << "Cagnotte : " << this->cagnotte << endl;
}

Bot::Bot() : Joueur(listeJoueurs) {}