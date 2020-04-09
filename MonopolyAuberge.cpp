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
#include "ListeJ.h"
#include "ListeNom.h"
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
    ListeJ* listeJoueurs = new ListeJ();
    ListeNom* listeNom = new ListeNom();
    

    
    int choixMenu = 0;

    while (!(choixMenu == 3 && listeJoueurs->getListe().size() != 0))
    {
        system("cls");
        cout << " Bienvenue dans le Monopoly de l'Auberge ! \n" << endl;
        cout << "Liste des joueurs :\n";
        for (int i = 0; i < listeJoueurs->getListe().size(); i++) {
            cout << listeJoueurs->getListe().operator[](i)->getNom() << endl;
        }

        cout << "\n 1 - Ajouter des joueurs\n 2 - Ajouter des bots\n 3 - Lancer la partie\n Entrez ci dessous le numero correspondant au menu voulu : ";

        cin >> choixMenu;
        if (choixMenu == 1) {

            if (listeJoueurs->getListe().size() == 6) {
                cout << "Vous ne pouvez plus rajouter de joueur !\n\n" << endl;
                system("PAUSE");
            }
            else {
                listeJoueurs->addJoueur(new Humain(listeJoueurs->getListe(), listeNom));
                system("PAUSE");
            }
        }
        if (choixMenu == 2) {
            int nbBot = 0;
            cout << "Combien de bots voulez vous ajouter : ";
            cin >> nbBot;
            if (nbBot > (6 - listeJoueurs->getListe().size())) {
                cout << "Le nombre de joueurs maximal est de 6 joueurs. Merci d'entrer moins de bots !\n\n" << endl;
                system("PAUSE");
            }
            else {
                for (int i = 0; i < nbBot; i++) {
                    listeJoueurs->addJoueur(new Bot(listeJoueurs->getListe(), listeNom));
                }
                system("PAUSE");
            }
        }
        if (choixMenu == 3) {

            plateauJeu->afficherPlateau();

            while (listeJoueurs->getListe().size() > 1) {

                for (int i = 0; i < listeJoueurs->getListe().size(); i++) {
                    int choixJoueur = 0;
                    cout << endl << endl;
                    if (listeJoueurs->getListe()[i]->getPenalite() == 0) {
                        plateauJeu->deroulementTour(listeJoueurs->getListe()[i], piocheAmnesie, piochePotCommun, piocheProp, listeJoueurs);
                    }
                    else {
                        cout << "Vous avez " << listeJoueurs->getListe()[i]->getPenalite() << " tours de penalite. Vous ne pouvez pas vous deplacer ce tour-ci." << endl;
                        listeJoueurs->getListe()[i]->setPenalite(listeJoueurs->getListe()[i]->getPenalite() - 1);
                    }
                    while (choixJoueur != 3) {
                        if (choixJoueur == 1) {
                            plateauJeu->afficherPlateau();
                        }
                        else if (choixJoueur == 2)
                        {
                            listeJoueurs->getListe()[i]->afficher();
                        }
                        cout << "\n\n\nC'est le tour de " << listeJoueurs->getListe()[i]->getNom() << endl;
                        cout << " 1 - Afficher le plateau\n 2 - Afficher stats\n 3 - Finir le tour\n > ";
                        cin >> choixJoueur;
                    }
                }
            }
        }
        if (choixMenu == 0 || choixMenu > 3)
        {
            cout << "\n Merci de rentrer un chiffre correspondant a un menu :)\n " << endl;
            system("PAUSE");
        }
    }

    
    delete piocheAmnesie;
    delete piochePotCommun;
    delete plateauJeu;
    return 0;
}
