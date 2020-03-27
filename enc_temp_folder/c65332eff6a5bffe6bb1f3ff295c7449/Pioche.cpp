#include "Pioche.h"
#include <time.h>
#include <vector>
#include <random>
using namespace std;

//Pioche::Pioche() {
//
//
//}

void Pioche::melangerPioche() {
    //int nbRand1;
    //int nbRand2;
    //CarteAction* i;

    //for (int j = 0; j < (pioche.size()*10); j++)
    //{
    //    nbRand1 = rand() % pioche.size();
    //    nbRand2 = rand() % pioche.size();
    //    i = pioche[nbRand1];
    //    pioche[nbRand1] = pioche[nbRand2];
    //    pioche[nbRand2] = i;
    //}

    random_shuffle(pioche.begin(), pioche.end());

}

void Pioche::afficherPioche() {

    for (int i = 0; i < pioche.size(); i++) {
        cout << "## " << this->pioche[i]->getTitre() << " ##" << endl;
        cout << this->pioche[i]->getDescription() << endl;
        cout << "Effet de deplacement : " << this->pioche[i]->getEffetDeplacement() << "     Effet d'argent : " << this->pioche[i]->getEffetArgent() << "     Penalite : " << this->pioche[i]->getPenalite() << endl;
        cout << endl;
    }
}

void Pioche::ajoutCarte(CarteAction* carte) {
    this->pioche.push_back(carte);
}

void Pioche::tirerUneCarte() {
    cout << "Vous avez tire la carte :" << endl;
    cout << "## " << this->pioche[0]->getTitre() << " ##" << endl;
    cout << this->pioche[0]->getDescription() << endl;
    cout << "Effet de deplacement : " << this->pioche[0]->getEffetDeplacement() << "     Effet d'argent : " << this->pioche[0]->getEffetArgent() << "     Penalite : " << this->pioche[0]->getPenalite() << endl;
    cout << endl;

    this->defausse.push_back(this->pioche[0]);
    this->pioche.erase(pioche.begin());

    if (pioche.size() == 0) {
        reinitPioche();
    }
}

void Pioche::afficherDefausse() {

    for (int i = 0; i < defausse.size(); i++) {
        cout << "## " << this->defausse[i]->getTitre() << " ##" << endl;
        cout << this->defausse[i]->getDescription() << endl;
        cout << "Effet de deplacement : " << this->defausse[i]->getEffetDeplacement() << "     Effet d'argent : " << this->defausse[i]->getEffetArgent() << "     Penalite : " << this->defausse[i]->getPenalite() << endl;
        cout << endl;
    }
}

void Pioche::reinitPioche() {
    this->pioche = this->defausse;
    melangerPioche();
    this->defausse.clear();
    cout << "La pioche a été re-mélangée !" << endl;
}