#include "Joueur.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <windows.h>
#include <time.h>
#include "plateau.h"
using namespace std;


void color3(int t, int f)
{
    HANDLE H = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H, f * 16 + t);
}

Joueur::Joueur(vector<Joueur*>* listeJoueurs)
{
    this->cagnotte = 1500;
}

string Joueur::getNom() { return this->nom; }
int Joueur::getLocalisation() { return this->localisation; }
int Joueur::getPenalite() { return this->penalite; }
int Joueur::getCagnotte() { return cagnotte; }
int Joueur::getCouleur() { return this->couleur; }
int Joueur::getNumero() { return this->numero; }

void Joueur::setPenalite(int penalite){ this->setPenalite(penalite); }
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
    cout << "Nom:"<<this->nom << endl;
    cout << "Cagnotte : " << this->cagnotte << endl;
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

Bot::Bot(vector<Joueur*>* listeJoueurs) : Joueur(listeJoueurs) {
    string listeNom[12] = { "Red","DHB","Le Memelord","Farquaad","Dzenos","Le Dragon","Le roi de la glisse","Nobody","Ysh","Sir Richard Burton","Archange","Airpods" };
    string nom;
    int i = rand() % 12;
    nom = listeNom[i];
    this->setNom(nom);
    this->setCouleur(listeJoueurs->size());
    this->setNumero(listeJoueurs->size());
    cout << "\nLe bot " << this->getNom() << " a ete cree ! Il a le numero " << this->getNumero() << ".\n" << endl;

}

Humain::Humain(vector<Joueur*>* listeJoueurs) : Joueur(listeJoueurs) {
    cout << "Entrez votre nom : ";
    string nom;
    cin >> nom;
    this->setNom(nom);
    this->setCouleur(listeJoueurs->size());
    cout << "\nVotre nom est : " << this->getNom() << " et vous etes le joueur numero " << this->getNumero() << ".\n" << endl;
    system("PAUSE");
    system("cls");
}