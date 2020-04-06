#include <iostream>
#include "Joueur.h"
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

int main()
{
   

    Joueur* nJoueur = new Joueur();
    nJoueur->choisir_nom();

    nJoueur->afficher();

  /*  vector<Joueur*> Listj;
    for (int i = 0; i < Listj.size(); i++) {
        Listj[i]->afficher();
    }
    */


    return 0;


}