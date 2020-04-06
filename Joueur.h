#ifndef JOUEUR_H
#define JOUEUR_H
#include <string>
#include <vector>
//#include "CartesPropriete.h"
using namespace std;


class Joueur
{
public:
    Joueur();
    virtual ~Joueur();
    
    
    void choisir_nom();
    
    void setCagnotte();
    void setLocalisation();
    

    string getNom();
   
    int getCagnotte();
    int getLocalisation();
    
    //void cartePropj();
    void afficher();

protected:

private:
    string nom;
    int cagnotte;
    
    
    int localisation;
    int couleur;
    // vector<CartePropriete*> MesProps;  //en lien avec la clasee cartePropriete
    //vector<Joueur*> ListJ;
};

#endif // JOUEUR_H
