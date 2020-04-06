#ifndef JOUEUR_H
#define JOUEUR_H
#include <string>
#include <vector>
#include "CartesPropriete.h"
using namespace std;


class Joueur
{
public:
    Joueur(int couleur);
    virtual ~Joueur();
    
    
    void choisir_nom();
    void setPion();
    void setNomPion();
    void setCagnotte();
    void setLocation();
    

    string getNom();
    char getPion;
    string getNomPion;
    int getCagnotte();
    int getLocation();

    void cartePropj();
    void afficher();

protected:

private:
    string nom;
    int cagnotte;
    char pion;
    string nomPion;
    int location;
    int couleur;
    // vector<CartePropriete*> MesProps;  //en lien avec la clasee cartePropriete
    //vector<Joueur*> mesJoueurs;
};

#endif // JOUEUR_H
