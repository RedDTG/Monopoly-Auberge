#include "Joueur.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <windows.h>
#include <time.h>
#include "plateau.h"
using namespace std;


void color(int t, int f)
{
    HANDLE H = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H, f * 16 + t);
}

Joueur::Joueur(vector<Joueur*>* listeJoueurs)
{
    cagnotte = 1500;
    system("PAUSE");
    system("cls");
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
    color(this->couleur, 0);
    cout << "Nom:"<<this->nom << endl;
    cout << "Cagnotte : " << this->cagnotte << endl;
}

Bot::Bot(vector<Joueur*>* listeJoueurs) : Joueur(listeJoueurs) {
    string listeNom[12] = { "Red","DHB","Le Memelord","Farquaad","Dzenos","Le Dragon","Le roi de la glisse","Nobody","Ysh","Sir Richard Burton","Archange","Airpods" };
    string nom;
    int i = rand() % 12;
    nom = listeNom[i];
    this->setNom(nom);
    this->setNumero((listeJoueurs->size() + 1));
    this->setCouleur(listeJoueurs->size() + 1);
    cout << "Le bot " << this->getNom() << " a été créé. Il a le numero " << this->getNumero() << endl;
}

Humain::Humain(vector<Joueur*>* listeJoueurs) : Joueur(listeJoueurs) {
    cout << "Entrez votre nom : ";
    string nom;
    cin >> nom;
    this->setNom(nom);
    this->setNumero((listeJoueurs->size() + 1));
    this->setCouleur(listeJoueurs->size() + 1);
    cout << "votre nom est : " << this->getNom() << " et vous etes le joueur numero " << this->getNumero() << ".\n" << endl;
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

void Humain::deroulementTour(plateau* plateauJeu) {
    int choixJoueur;
    cout << " 1 - Afficher le plateau\n 2 - Lancer les des\n" << endl;
    cin >> choixJoueur;

    if (choixJoueur == 1) {
        plateauJeu->afficherPlateau();
    }
    else {
        int deplacement;
        des* unDe = new des;
        cout << "Vous lancez les dés !" << endl;
        deplacement = (unDe->jetDes() + unDe->jetDes());
        this->addLocalisation(deplacement);
    }
}

void Bot::deroulementTour(plateau* plateauJeu) { }