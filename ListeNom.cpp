#include "ListeNom.h"

ListeNom::ListeNom() {
    this->liste.push_back("Red");
    this->liste.push_back("DHB");
    this->liste.push_back("Le MemeLord");
    this->liste.push_back("Farquaad");
    this->liste.push_back("Dzenos");
    this->liste.push_back("Le Dragon");
    this->liste.push_back("Le Roi de la Glisse");
    this->liste.push_back("Nobody");
    this->liste.push_back("Ysh");
    this->liste.push_back("Sir Richard Burton");
}

vector<string> ListeNom::getListe() { return this->liste; }

void ListeNom::delNom(int i) {
    this->liste.erase(this->liste.begin() + i);
}

string ListeNom::getNom(int i) { return this->liste[i]; }