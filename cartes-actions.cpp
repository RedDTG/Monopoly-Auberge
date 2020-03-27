#include <iostream>
#include "CarteAction.h"
#include <windows.h>
#include <time.h>
#include <vector>
#include "Pioche.h"
using namespace std;

void color(int t, int f)
{
    HANDLE H = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H, f * 16 + t);
}

void melangerCartes(vector<CarteAction*>* cartes) {
    int nbRand1;
    int nbRand2;
    CarteAction* i;
    srand(time(NULL));

    for (int j = 0; j < 100; j++)
    {
        nbRand1 = rand() % cartes->size();
        nbRand2 = rand() % cartes->size();
        i = cartes->operator[](nbRand1);
        cartes->operator[](nbRand1) = cartes->operator[](nbRand2);
        cartes->operator[](nbRand2) = i;
    }
}

int main() {
    Pioche* piocheAmnesie = new Pioche;
    Pioche* piochePotCommun = new Pioche;

    piocheAmnesie->ajoutCarte(new CarteAction("Titre 1", 100, 1, 0, "Description 1"));
    piocheAmnesie->ajoutCarte(new CarteAction("Titre 2", 100, 1, 0, "Description 2"));
    piocheAmnesie->ajoutCarte(new CarteAction("Titre 3", 100, 1, 0, "Description 3"));
    piocheAmnesie->ajoutCarte(new CarteAction("Titre 4", 100, 1, 0, "Description 4"));
    piocheAmnesie->ajoutCarte(new CarteAction("Titre 5", 100, 1, 0, "Description 5"));

    piochePotCommun->ajoutCarte(new CarteAction("Titre 1", 100, 1, 0, "Description 1"));
    piochePotCommun->ajoutCarte(new CarteAction("Titre 2", 100, 1, 0, "Description 2"));
    piochePotCommun->ajoutCarte(new CarteAction("Titre 3", 100, 1, 0, "Description 3"));
    piochePotCommun->ajoutCarte(new CarteAction("Titre 4", 100, 1, 0, "Description 4"));
    piochePotCommun->ajoutCarte(new CarteAction("Titre 5", 100, 1, 0, "Description 5"));

    piochePotCommun->melangerPioche();
    piocheAmnesie->melangerPioche();

    color(4, 0);
    piocheAmnesie->afficherPioche();
    cout << "\n\n\n" << endl;
    color(9, 0);
    piochePotCommun->afficherPioche();
    color(15, 0);

    delete piocheAmnesie;
    delete piochePotCommun;

    return 0;
}