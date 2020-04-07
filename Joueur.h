#ifndef JOUEUR_H
#define JOUEUR_H
#include <string>
#include <vector>
#include "CartesPropriete.h"
using namespace std;


class Joueur
{
public:
    Joueur(vector<Joueur*>* listeJoueurs);
    
    void setCagnotte(int effetArgent);
    void setLocalisation(int localisation);
    void setPenalite(int penalite);
    void addLocalisation(int effetDeplacement);
    

    string getNom();
   
    int getCagnotte();
    int getLocalisation();
    
    //void cartePropj();
    void afficher();

protected:

private:
    string nom;
    int cagnotte;
    int numero;
    
    int localisation;
    int couleur;
    // vector<CartePropriete*> MesProps;  //en lien avec la clasee cartePropriete
    //vector<Joueur*> ListJ;
};

#endif // JOUEUR_H
