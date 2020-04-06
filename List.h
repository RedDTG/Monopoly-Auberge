#pragma once
#include <string>
#include <vector>
using namespace std;
class List
{

	public:

	protected:

	private:


<<<<<<< HEAD:List.h
};

=======
	void ajoutCarte(CarteAction*);
	void melangerPioche();
	void afficherPioche();
	void tirerUneCarte();
	void afficherDefausse();
	void reinitPioche();
	vector<CarteAction*> getPioche();
};

class PiocheAmnesie: public Pioche
{
public:
	PiocheAmnesie();
};

class PiochePotCommun : public Pioche
{
public:
	PiochePotCommun();
};
>>>>>>> master:Pioche.h
