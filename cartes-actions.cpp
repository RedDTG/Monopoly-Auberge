#include <iostream>
#include "CarteAction.h"
#include <windows.h>
using namespace std;

void color(int t, int f)
{
    HANDLE H = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H, f * 16 + t);
}

void creationTitresAction(string titresAmnesies[], string titresPotCommun[]) {
    titresAmnesies[0] = "Titre Amnesie 1";
    titresAmnesies[1] = "Titre Amnesie 2";
    titresAmnesies[2] = "Titre Amnesie 3";
    titresAmnesies[3] = "Titre Amnesie 4";
    titresAmnesies[4] = "Titre Amnesie 5";
    titresAmnesies[5] = "Titre Amnesie 6";
    titresAmnesies[6] = "Titre Amnesie 7";
    titresAmnesies[7] = "Titre Amnesie 8";
    titresAmnesies[8] = "Titre Amnesie 9";
    titresAmnesies[9] = "Titre Amnesie 10";

    titresPotCommun[0] = "Titre Pot Commun 1";
    titresPotCommun[1] = "Titre Pot Commun 2";
    titresPotCommun[2] = "Titre Pot Commun 3";
    titresPotCommun[3] = "Titre Pot Commun 4";
    titresPotCommun[4] = "Titre Pot Commun 5";
    titresPotCommun[5] = "Titre Pot Commun 6";
    titresPotCommun[6] = "Titre Pot Commun 7";
    titresPotCommun[7] = "Titre Pot Commun 8";
    titresPotCommun[8] = "Titre Pot Commun 9";
    titresPotCommun[9] = "Titre Pot Commun 10";
}
void creationDeplacementsAction(int deplacementsAmnesies[], int deplacementsPotCommun[]) {
    deplacementsAmnesies[0] = 0;
    deplacementsAmnesies[1] = 1;
    deplacementsAmnesies[2] = 2;
    deplacementsAmnesies[3] = 3;
    deplacementsAmnesies[4] = 4;
    deplacementsAmnesies[5] = 5;
    deplacementsAmnesies[6] = 6;
    deplacementsAmnesies[7] = 7;
    deplacementsAmnesies[8] = 8;
    deplacementsAmnesies[9] = 9;

    deplacementsPotCommun[0] = 0;
    deplacementsPotCommun[1] = 1;
    deplacementsPotCommun[2] = 2;
    deplacementsPotCommun[3] = 3;
    deplacementsPotCommun[4] = 4;
    deplacementsPotCommun[5] = 5;
    deplacementsPotCommun[6] = 6;
    deplacementsPotCommun[7] = 7;
    deplacementsPotCommun[8] = 8;
    deplacementsPotCommun[9] = 9;
}
void creationArgentAction(int argentAmnesies[], int argentPotCommun[]) {
    argentAmnesies[0] = 0;
    argentAmnesies[1] = 1;
    argentAmnesies[2] = 2;
    argentAmnesies[3] = 3;
    argentAmnesies[4] = 4;
    argentAmnesies[5] = 5;
    argentAmnesies[6] = 6;
    argentAmnesies[7] = 7;
    argentAmnesies[8] = 8;
    argentAmnesies[9] = 9;

    argentPotCommun[0] = 0;
    argentPotCommun[1] = 1;
    argentPotCommun[2] = 2;
    argentPotCommun[3] = 3;
    argentPotCommun[4] = 4;
    argentPotCommun[5] = 5;
    argentPotCommun[6] = 6;
    argentPotCommun[7] = 7;
    argentPotCommun[8] = 8;
    argentPotCommun[9] = 9;
}
void creationPenalitesAction(int penalitesAmnesies[], int penalitesPotCommun[]) {
    penalitesAmnesies[0] = 0;
    penalitesAmnesies[1] = 1;
    penalitesAmnesies[2] = 2;
    penalitesAmnesies[3] = 3;
    penalitesAmnesies[4] = 4;
    penalitesAmnesies[5] = 5;
    penalitesAmnesies[6] = 6;
    penalitesAmnesies[7] = 7;
    penalitesAmnesies[8] = 8;
    penalitesAmnesies[9] = 9;

    penalitesPotCommun[0] = 0;
    penalitesPotCommun[1] = 1;
    penalitesPotCommun[2] = 2;
    penalitesPotCommun[3] = 3;
    penalitesPotCommun[4] = 4;
    penalitesPotCommun[5] = 5;
    penalitesPotCommun[6] = 6;
    penalitesPotCommun[7] = 7;
    penalitesPotCommun[8] = 8;
    penalitesPotCommun[9] = 9;
}
void creationDescriptionsAction(string descriptionsAmnesies[], string descriptionsPotCommun[]) {
    descriptionsAmnesies[0] = "Description Amnesie 1";
    descriptionsAmnesies[1] = "Description Amnesie 2";
    descriptionsAmnesies[2] = "Description Amnesie 3";
    descriptionsAmnesies[3] = "Description Amnesie 4";
    descriptionsAmnesies[4] = "Description Amnesie 5";
    descriptionsAmnesies[5] = "Description Amnesie 6";
    descriptionsAmnesies[6] = "Description Amnesie 7";
    descriptionsAmnesies[7] = "Description Amnesie 8";
    descriptionsAmnesies[8] = "Description Amnesie 9";
    descriptionsAmnesies[9] = "Description Amnesie 10";

    descriptionsPotCommun[0] = "Description Pot Commun 1";
    descriptionsPotCommun[1] = "Description Pot Commun 2";
    descriptionsPotCommun[2] = "Description Pot Commun 3";
    descriptionsPotCommun[3] = "Description Pot Commun 4";
    descriptionsPotCommun[4] = "Description Pot Commun 5";
    descriptionsPotCommun[5] = "Description Pot Commun 6";
    descriptionsPotCommun[6] = "Description Pot Commun 7";
    descriptionsPotCommun[7] = "Description Pot Commun 8";
    descriptionsPotCommun[8] = "Description Pot Commun 9";
    descriptionsPotCommun[9] = "Description Pot Commun 10";
}

int main() {
    string titresAmnesies[10];
    string titresPotCommun[10];
    int deplacementsAmnesies[10];
    int deplacementsPotCommun[10];
    int argentAmnesies[10];
    int argentPotCommun[10];
    int penalitesAmnesies[10];
    int penalitesPotCommun[10];
    string descriptionsAmnesies[10];
    string descriptionsPotCommun[10];

    creationTitresAction(titresAmnesies, titresPotCommun);
    creationDeplacementsAction(deplacementsAmnesies, deplacementsPotCommun);
    creationArgentAction(argentAmnesies, argentPotCommun);
    creationPenalitesAction(penalitesAmnesies, penalitesPotCommun);
    creationDescriptionsAction(descriptionsAmnesies, descriptionsPotCommun);

    CarteAction* cartesAmnesies[10];
    CarteAction* cartesPotCommun[10];

    for (int i = 0; i < 10; i++) {
        cartesAmnesies[i] = new CarteAction;
        cartesAmnesies[i]->initCarteAction(titresAmnesies[i], argentAmnesies[i], deplacementsAmnesies[i], penalitesAmnesies[i], descriptionsAmnesies[i]);
        color(4, 0);
        cartesAmnesies[i]->afficherCarteAction();
        color(15, 0);
    }

    cout << "\n\n\n" << endl;

    for (int i = 0; i < 10; i++) {
        cartesPotCommun[i] = new CarteAction;
        cartesPotCommun[i]->initCarteAction(titresPotCommun[i], argentPotCommun[i], deplacementsPotCommun[i], penalitesPotCommun[i], descriptionsPotCommun[i]);
        color(9, 0);
        cartesPotCommun[i]->afficherCarteAction();
        color(15, 0);
    }
}