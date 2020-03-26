#include "Pioche.h"
#include <time.h>

vector<CarteAction*>* Pioche::getPioche() { return this->pioche; }
vector<CarteAction*>* Pioche::getDefausse() { return this->defausse; }

void Pioche::melangerPioche() {
    int nbRand1;
    int nbRand2;
    CarteAction* i;
    srand(time(NULL));

    for (int j = 0; j < (getPioche()->size()*10); j++)
    {
        nbRand1 = rand() % getPioche()->size();
        nbRand2 = rand() % getPioche()->size();
        i = getPioche()->operator[](nbRand1);
        getPioche()->operator[](nbRand1) = getPioche()->operator[](nbRand2);
        getPioche()->operator[](nbRand2) = i;
    }
}

void Pioche::afficherPioche() {

    for (int i = 0; i < getPioche()->size(); i++) {
        cout << "## " << this->getPioche()->operator[](i)->getTitre() << " ##" << endl;
        cout << this->getPioche()->operator[](i)->getDescription() << endl;
        cout << "Effet de deplacement : " << this->getPioche()->operator[](i)->getEffetDeplacement() << "     Effet d'argent : " << this->getPioche()->operator[](i)->getEffetArgent() << "     Penalite : " << this->getPioche()->operator[](i)->getPenalite() << endl;
        cout << endl;
    }
}