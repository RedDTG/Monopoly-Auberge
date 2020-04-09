#include "Joueur.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <windows.h>
#include <time.h>
#include "plateau.h"
#include "ListeJ.h"
using namespace std;


void color3(int t, int f)
{
    HANDLE H = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H, f * 16 + t);
}

Joueur::Joueur(vector<Joueur*> ListeJoueurs, ListeNom* ListeNom)
{
    this->cagnotte = 1500;
    this->penalite = 0;
    this->localisation = 0;
}

string Joueur::getNom() { return this->nom; }
int Joueur::getLocalisation() { return this->localisation; }
int Joueur::getPenalite() { return this->penalite; }
int Joueur::getCagnotte() { return cagnotte; }
int Joueur::getCouleur() { return this->couleur; }
int Joueur::getNumero() { return this->numero; }

void Joueur::setPenalite(int penalite){ this->penalite = penalite; }
void Joueur::setNom(string nom) { this->nom = nom; }
void Joueur::setNumero(int numero) { this->numero = numero; }
void Joueur::setCouleur(int couleur) { this->couleur = couleur; }
void Joueur::setCagnotte(int effetArgent) { this->cagnotte = cagnotte + effetArgent; }
void Joueur::addLocalisation(int effetDeplacement)
{
    if (effetDeplacement > 0) {
        cout << "Vous avancez de " << effetDeplacement << " cases." << endl;
        for (int i = 0; i < effetDeplacement; i++) {
            this->localisation = localisation + 1;
            if (this->localisation == 40) {
                this->localisation = 0;
                this->cagnotte = cagnotte + 200;
                cout << "Vous passez par la case départ vous gagnez 200€ !" << endl;
            }
        }
    }
    else if (effetDeplacement < 0) {
        for (int i = 0; i > effetDeplacement; i--) {
            this->localisation = localisation - 1;
            if (this->localisation == 0) {
                this->localisation = 39;
            }
        }
    }
}
void Joueur::setLocalisation(int localisation) { this->localisation = localisation; }

void Joueur::afficher()
{
    color3(this->couleur, 0);
    cout << "\nNom:"<<this->nom << endl;
    cout << "Cagnotte : " << this->cagnotte << endl;
    cout << "Penalites : " << this->penalite << endl;
    cout << "Localisation : Case " << this->localisation << endl << endl;
    color3(15, 0);
}

int Joueur::detectionGroupe(string nomCouleur, int groupe) {
    int compteur = 0;
    for (int i = 0; i < this->mesProps.size(); i++) {
        if (this->mesProps.operator[](i)->getNomCouleur() == nomCouleur) { compteur = +1; }
    }
    if (compteur == groupe) { return 1; }
    else { return 0; }
}

void Joueur::addCarteProp(CartePropriete* carte) { this->mesProps.push_back(carte); }

Bot::Bot(vector<Joueur*> ListeJoueurs, ListeNom* ListeNom) : Joueur(ListeJoueurs, ListeNom) {
    string nom;
    int i = rand() % ListeNom->getListe().size();
    nom = ListeNom->getNom(i);
    ListeNom->delNom(i);
    this->setNom(nom);
    this->setCouleur(ListeJoueurs.size() + 1);
    this->setNumero(ListeJoueurs.size() + 1);
    cout << "\nLe bot " << this->getNom() << " a ete cree ! Il a le numero " << this->getNumero() << ".\n" << endl;
}

Humain::Humain(vector<Joueur*> ListeJoueurs, ListeNom* ListeNom) : Joueur(ListeJoueurs, ListeNom) {
    cout << "Entrez le nom du joueur : ";
    string nom;
    cin >> nom;
    this->setNom(nom);
    this->setCouleur(ListeJoueurs.size() + 1);
    this->setNumero(ListeJoueurs.size() + 1);
    cout << "\nLe nom du joueur est : " << this->getNom() << " et vous etes le joueur numero " << this->getNumero() << ".\n" << endl;
}