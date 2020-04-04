#ifndef JOUEUR_H
#define JOUEUR_H
#include <string>
#include <vector>
using namespace std;


class Joueur
{
public:
    Joueur();
    virtual ~Joueur();
    
    
    void choisir_nom();
    void setPion();
    void setNomPion();
    void setCagnotte();
    

    string getNom();
    char getPion;
    string getNomPion;
    int getCagnotte();

    void afficher();

protected:

private:
    string nom;
    int cagnotte;
    char pion;
    string nomPion;

    //vector<Joueur*> mesJoueurs;
};

#endif // JOUEUR_H
