#include "Bot.h"
#include<iostream>
#include<string>
#include<vector>
#include <windows.h>
#include <random>
using namespace std;



Bot::Bot(int couleur) {
	cagnotte = 1500;
	string listeNom[12] = {"Red","DHB","Le Memelord","Farquaad","Dzenos","Le Dragon","Le roi de la glisse","Nobody","Ysh","Sir Richard Burton","Archange","Airpods"};
	string nom;
	int i = rand()%12;
	nom = listeNom[i];
	this->nom = nom;
	this->couleur = couleur+1;
}

void Bot::choisir_nombre() {
	int nbBot = 7;
	while (nbBot > 6) {
		cout << "Combien de bots voulez vous ajouter : ";
		cin >> nbBot;
		if (nbBot > 6) {
			cout << "\nLe nombre de bots maximal est de 6. Merci d'entrer un nombre inferieur ou egal a 6 !\n" << endl;
		}
		else
		{
			vector<Bot*>* listeBot = new vector<Bot*>(0);
			int i = 0;
			while (i < nbBot) {
				listeBot->push_back(new Bot(i));
				listeBot->operator[](i)->afficherBot();
				i++;
			}
		}
	}

}

void Bot::afficherBot(){
	cout <<"Voici un bot : "<<this->nom<<endl;
	cout << "Il a actuellement " << this->cagnotte << " euros." << endl;
	cout << "Sa couleur est : " << this->couleur <<"\n"<<endl;
}

void Bot::acheterCarte(int montant) {
	if ((this->cagnotte - montant) > 300) {
		//this->mainBot.push_back(new CartePropriete(string nom, int prixAchat, int loyer, string Nomcouleur, int type, int idcouleur)); //ligne à retravailler quand on aurait fait le déroulement du jeu
	}
	else
	{
		cout << "Non merci je ne l'achète pas c'est trop cher !" << endl;
	}
}
int Bot::getLocalisation() {
	return localisation;
}

int Bot::getCagnotte() {
	return cagnotte;
}

void Bot::setCagnotte() {

}

void Bot::setLocalisation() {

}