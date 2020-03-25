

#include <iostream>
#include "CarteAction.h"

using namespace std;

void creationDeplacementsAction(int deplacementsActions[]) {
    deplacementsActions[0] = 0;
    deplacementsActions[1] = 1;
    deplacementsActions[2] = 2;
    deplacementsActions[3] = 3;
    deplacementsActions[4] = 4;
    deplacementsActions[5] = 5;
    deplacementsActions[6] = 6;
    deplacementsActions[7] = 7;
    deplacementsActions[8] = 8;
    deplacementsActions[9] = 9;

}

int main() {
    string titresActions[10];
    int deplacementsActions[10];
    int argentActions[10];
    int penalitesActions[10];
    string descriptionsActions[10];

    creationDeplacementsAction(deplacementsActions);

    titresActions[0] = "Titre 1";
    titresActions[1] = "Titre 2";
    titresActions[2] = "Titre 3";
    titresActions[3] = "Titre 4";
    titresActions[4] = "Titre 5";
    titresActions[5] = "Titre 6";
    titresActions[6] = "Titre 7";
    titresActions[7] = "Titre 8";
    titresActions[8] = "Titre 9";
    titresActions[9] = "Titre 10";

    argentActions[0] = 0;
    argentActions[1] = 1;
    argentActions[2] = 2;
    argentActions[3] = 3;
    argentActions[4] = 4;
    argentActions[5] = 5;
    argentActions[6] = 6;
    argentActions[7] = 7;
    argentActions[8] = 8;
    argentActions[9] = 9;

    penalitesActions[0] = 0;
    penalitesActions[1] = 1;
    penalitesActions[2] = 2;
    penalitesActions[3] = 3;
    penalitesActions[4] = 4;
    penalitesActions[5] = 5;
    penalitesActions[6] = 6;
    penalitesActions[7] = 7;
    penalitesActions[8] = 8;
    penalitesActions[9] = 9;

    descriptionsActions[0] = "Description 1";
    descriptionsActions[1] = "Description 2";
    descriptionsActions[2] = "Description 3";
    descriptionsActions[3] = "Description 4";
    descriptionsActions[4] = "Description 5";
    descriptionsActions[5] = "Description 6";
    descriptionsActions[6] = "Description 7";
    descriptionsActions[7] = "Description 8";
    descriptionsActions[8] = "Description 9";
    descriptionsActions[9] = "Description 10";

    /*creationTitresCartesAction(titresActions);
    creationDeplacementsCartesAction(deplacementsActions);
    creationArgentCartesAction(argentActions);
    creationPenalitesCartesAction(penalitesActions);
    creationDescriptionsCartesAction(descriptionsActions);*/

    CarteAction* cartesAction[10];

    for (int i = 0; i < 10; i++) {
        cartesAction[i] = new CarteAction;
        cartesAction[i]->initCarteAction(titresActions[i], argentActions[i], deplacementsActions[i], penalitesActions[i], descriptionsActions[i]);
        cartesAction[i]->afficherCarteAction();
    }
    


}