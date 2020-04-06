#include "banque.h"
#include <iostream>
using namespace std;

banque::banque()
{
	argent = 100000;
}

void banque::donner(int montant)
{
	argent = argent + montant;
}

int banque::getArgent()
{
	return argent;
}

void banque::prendre(int montant)
{
	argent = argent - montant;
}

