#include <iostream>
#include "CarteAction.h"
#include <windows.h>
#include <time.h>
#include <vector>
#include "Pioche.h"
#include"CartesPropriete.h"
#include <cstdlib>
#include "plateau.h"
#include "Joueur.h"
#include "PiocheProprietes.h"
using namespace std;

void color(int t, int f)
{
    HANDLE H = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H, f * 16 + t);
}

int main() {
    srand(time(NULL));
    Pioche* piocheAmnesie = new PiocheAmnesie();
    Pioche* piochePotCommun = new PiochePotCommun();
    PiocheProprietes* piocheProp = new PiocheProprietes();
    plateau* plateauJeu = new plateau(piocheProp->getPiocheProp());
    vector<Joueur*>* listeJoueurs;

    cout << " Bienvenue dans le Monopoly de l'Auberge ! \n" << endl;
    int choixMenu = 0;

    while (!(choixMenu == 3))
    {
        cout << " 1 - Ajouter des joueurs\n 2 - Ajouter des bots\n 3 - Lancer la partie\n Entrez ci dessous le numero correspondant au menu voulu : " << endl;

        cin >> choixMenu;
        if (choixMenu == 1) {
            cout << "Ici on reverra vers l'ecran d'ajout des joueurs\n";
            if (listeJoueurs->size() == 6) {
                cout << "Vous ne pouvez plus rajouter de joueur !" << endl;
            }
            else {
                Joueur* nJoueur = new Joueur(listeJoueurs);
                listeJoueurs->push_back(nJoueur);
                system("PAUSE");
                system("cls");
            }
        }
        if (choixMenu == 2) {
            int nbBot = 0;
            while (nbBot < (6-listeJoueurs->size())) {
                cout << "Combien de bots voulez vous ajouter : ";
                cin >> nbBot;
                if (nbBot > (6 - listeJoueurs->size())) {
                    cout << "\nLe nombre de joueurs maximal est de 6 joueurs. Merci d'entrer moins de bots !\n" << endl;
                }
                else
                {
                    int i = 0;
                    for (int i = 0; i < nbBot; i++) {
                        listeJoueurs->push_back(new Bot(listeJoueurs));
                    }
                }
            }
            Bot* nouveauBot = new Bot(listeJoueurs);
            listeJoueurs->push_back(nouveauBot);

            system("PAUSE");
            system("cls");
        }
        if (choixMenu == 3) {

            int gagnant;
            plateauJeu->afficherPlateau();

            while (gagnant != 0) {

                for (int i = 0; i < listeJoueurs->size(); i++) {
                    listeJoueurs->operator[](i)->deroulementTour(plateauJeu);
                }
            }
            
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
    delete plateauJeu;
    return 0;
}
