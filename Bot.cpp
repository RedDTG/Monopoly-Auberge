#include "Bot.h"
#include<iostream>
#include<string>
#include<vector>
#include <windows.h>
#include <random>
using namespace std;

void color(int t, int f)
{
	HANDLE H = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(H, f * 16 + t);
}


Bot::Bot(int couleur) {
	cagnotte = 1500;
	string listeNom[7] = {"Red","Dakath","Memelord","Farquaad","Dzenos","Shipship","TwixiZ"};
	string nom;
	int i = rand()%7;
	nom = listeNom[i];
	this->nom = nom;
	this->couleur = couleur+1;
}

void Bot::choisir_nombre() {
	cout << "Combien de bots voulez vous ajouter : ";
	int nbBot = 0;
	cin >> nbBot;
	vector<Bot*>* listeBot = new vector<Bot*>(0);
	int i = 0;
	while (i < nbBot){
		listeBot->push_back(new Bot(i));
		listeBot->operator[](i)->afficherBot();
		i++;
	}
}

void Bot::afficherBot(){
	color(this->couleur, 0);
	cout <<"Voici le premier bot : "<<this->nom<<endl;
	cout << "Il a actuellement " << this->cagnotte << " euros." << endl;
	cout << "Sa couleur est : " << this->couleur <<"\n"<<endl;
}

