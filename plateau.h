#pragma once
#include <vector>
#include "Case.h"
using namespace std;

class plateau
{
private:
	vector<Case*> tableau;
	vector<string> tabPos;


public:

	plateau();
	void afficherPlateau();

};


