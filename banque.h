#pragma once
#include <iostream>
using namespace std;
class banque
{
public:
	banque();
	int getArgent();

	void donner(int montant);
	void prendre(int montant);

protected:

private:
	int argent;
};

