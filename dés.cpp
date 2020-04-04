#include "dés.h"
#include <string>
#include <iostream>
#include <ctime>
#include <random>
#include <cstdlib>
using namespace std;

dés::dés()
{
	face = 6;
}

int dés::jetDés()
{
	int roll = 0;
	roll = rand() % face + 1;

	return roll;
}