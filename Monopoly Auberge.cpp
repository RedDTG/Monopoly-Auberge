// Monopoly Auberge.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include"CartesPropriete.h"
#include "Bot.h"
#include <cstdlib>
//#include "Joueur.h"
using namespace std;
int main()
{
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



}


// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
