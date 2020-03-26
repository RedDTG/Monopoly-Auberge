#include <iostream>
#include "CarteAction.h"
#include <windows.h>
#include <time.h>
#include <vector>
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
    vector<CarteAction*>* cartesAmnesies = new vector<CarteAction*>(0);
    vector<CarteAction*>* cartesPotCommun = new vector<CarteAction*>(0);

    cartesAmnesies->push_back(new CarteAction("Titre 1", 100, 1, 0, "Description 1"));
    cartesAmnesies->push_back(new CarteAction("Titre 2", 100, 1, 0, "Description 2"));
    cartesAmnesies->push_back(new CarteAction("Titre 3", 100, 1, 0, "Description 3"));
    cartesAmnesies->push_back(new CarteAction("Titre 4", 100, 1, 0, "Description 4"));
    cartesAmnesies->push_back(new CarteAction("Titre 5", 100, 1, 0, "Description 5"));
  
    cartesPotCommun->push_back(new CarteAction("Titre 1", 100, 1, 0, "Description 1"));
    cartesPotCommun->push_back(new CarteAction("Titre 2", 100, 1, 0, "Description 2"));
    cartesPotCommun->push_back(new CarteAction("Titre 3", 100, 1, 0, "Description 3"));
    cartesPotCommun->push_back(new CarteAction("Titre 4", 100, 1, 0, "Description 4"));
    cartesPotCommun->push_back(new CarteAction("Titre 5", 100, 1, 0, "Description 5"));

    for (int i = 0; i < cartesAmnesies->size(); i++) {
        //melangerCartes(cartesAmnesies);
        color(4, 0);
        cartesAmnesies->operator[](i)->afficherCarteAction();
        color(15, 0);
    }


    cout << "\n\n\n" << endl;

    for (int i = 0; i < cartesPotCommun->size(); i++) {
        //melangerCartes(cartesPotCommun);
        color(9, 0);
        cartesPotCommun->operator[](i)->afficherCarteAction();
        color(15, 0);
    }

    delete cartesAmnesies;
    delete cartesPotCommun;
}