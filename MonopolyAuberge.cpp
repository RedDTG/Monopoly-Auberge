#include <iostream>
#include "CarteAction.h"
#include <windows.h>
#include <time.h>
#include <vector>
#include "Pioche.h"
#include"CartesPropriete.h"
#include "Bot.h"
#include <cstdlib>
using namespace std;

void color(int t, int f)
{
    HANDLE H = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H, f * 16 + t);
}

int main() {
    srand(time(NULL));
    Pioche* piocheAmnesie = new PiocheAmnesie;
    Pioche* piochePotCommun = new PiochePotCommun;
    cout << " Bienvenue dans le Monopoly de l'Auberge ! \n" << endl;
    int choixMenu = 0;
    while (!(choixMenu==3))
    {
        cout << " 1 - Ajouter des joueurs\n 2 - Ajouter des bots\n 3 - Lancer la partie\n Entrez ci dessous le numero correspondant au menu voulu : " << endl;
    
        cin >> choixMenu;
        if (choixMenu == 1) {
            cout << "Ici on reverra vers l'ecran d'ajout des joueurs\n";
            //Joueur* nJoueur = new Joueur();
            //nJoueur->choisir_nom();
            system("PAUSE");
            system("cls");
        }
        if (choixMenu == 2) {
            Bot* nouveauBot = new Bot(0);
            nouveauBot->choisir_nombre();
            system("PAUSE");
            system("cls");
        }
        if (choixMenu == 3) {
            cout << "Ici on mettra tout le code lie au deroulement de la partie \n";
            //CartePropriete::CreaCarteProp;
            system("PAUSE");
            system("cls");
        }
        if (choixMenu == 0 || choixMenu > 3)
        {
            cout << "\n Merci de rentrer un chiffre correspondant a un menu :)\n " << endl;
            system("PAUSE");
            system("cls");
        }
    }
    
    delete piocheAmnesie;
    delete piochePotCommun;

    return 0;
}
