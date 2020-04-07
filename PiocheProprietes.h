#pragma once
#include "CartesPropriete.h"
#include <vector>

class PiocheProprietes
{
private:
	vector<CartePropriete*>	PiocheProp;

public:
	PiocheProprietes();
	void afficherPiocheProp();
	vector<CartePropriete*> getPiocheProp();
};

