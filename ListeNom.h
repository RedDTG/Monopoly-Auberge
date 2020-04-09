#pragma once
#include <vector>
#include <iostream>
#include <string>
using namespace std;

class ListeNom
{
private:
	vector<string> liste;

public:
	ListeNom();
	vector<string> getListe();
	void delNom(int i);
	string getNom(int i);
};

