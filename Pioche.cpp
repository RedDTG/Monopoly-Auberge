#include "Pioche.h"
#include <time.h>

//Pioche::Pioche() {
//
//
//}

void Pioche::melangerPioche() {
    int nbRand1;
    int nbRand2;
    CarteAction* i;
    srand(time(NULL));

    for (int j = 0; j < (pioche.size()*10); j++)
    {
        nbRand1 = rand() % pioche.size();
        nbRand2 = rand() % pioche.size();
        i = pioche.operator[](nbRand1);
        pioche.operator[](nbRand1) = pioche[nbRand2];
        pioche.operator[](nbRand2) = i;
    }
}

void Pioche::afficherPioche() {

    for (int i = 0; i < pioche.size(); i++) {
        cout << "## " << this->pioche.operator[](i)->getTitre() << " ##" << endl;
        cout << this->pioche.operator[](i)->getDescription() << endl;
        cout << "Effet de deplacement : " << this->pioche.operator[](i)->getEffetDeplacement() << "     Effet d'argent : " << this->pioche.operator[](i)->getEffetArgent() << "     Penalite : " << this->pioche.operator[](i)->getPenalite() << endl;
        cout << endl;
    }
}

void Pioche::ajoutCarte(CarteAction* carte) {
    this->pioche.push_back(carte);
}