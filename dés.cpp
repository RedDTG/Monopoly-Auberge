#include "d�s.h"
#include <string>
#include <iostream>
#include <ctime>
#include <random>
#include <cstdlib>
using namespace std;

d�s::d�s()
{
	face = 6;
}

int d�s::jetD�s()
{
	int roll = 0;
	roll = rand() % face + 1;

	return roll;
}