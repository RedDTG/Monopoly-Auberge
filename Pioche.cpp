#include "Pioche.h"
#include <time.h>
#include <vector>
#include <random>
using namespace std;

PiocheAmnesie::PiocheAmnesie() {
    ajoutCarte(new CarteAction("Titre 1", 100, 1, 0, "Description 1"));
    ajoutCarte(new CarteAction("Titre 2", 100, 1, 0, "Description 2"));
    ajoutCarte(new CarteAction("Titre 3", 100, 1, 0, "Description 3"));
    ajoutCarte(new CarteAction("Titre 4", 100, 1, 0, "Description 4"));
    ajoutCarte(new CarteAction("Titre 5", 100, 1, 0, "Description 5"));
    melangerPioche();
}

PiochePotCommun::PiochePotCommun() {
    ajoutCarte(new CarteAction("Titre 1", 100, 3, 0, "Description 1"));
    ajoutCarte(new CarteAction("Titre 2", 100, 3, 0, "Description 2"));
    ajoutCarte(new CarteAction("Titre 3", 100, 3, 0, "Description 3"));
    ajoutCarte(new CarteAction("Titre 4", 100, 3, 0, "Description 4"));
    ajoutCarte(new CarteAction("Titre 5", 100, 3, 0, "Description 5"));
    melangerPioche();
}

vector<CarteAction*> Pioche::getPioche() { return pioche; }

void Pioche::melangerPioche() {
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
    cout << "La pioche a ete re-melangee !" << endl;
}