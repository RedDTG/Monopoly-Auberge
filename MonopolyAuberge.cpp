#include <iostream>
#include "CarteAction.h"
#include <windows.h>
#include <time.h>
#include <vector>
#include "Pioche.h"
#include"CartesPropriete.h"
using namespace std;

void color(int t, int f)
{
    HANDLE H = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H, f * 16 + t);
}

int main() {
    srand(time(NULL));
    Pioche* piocheAmnesie = new PiocheAmnesie;
    Pioche* piochePotCommun = new PiochePotCommun;
    
    delete piocheAmnesie;
    delete piochePotCommun;

    return 0;
}
