#include "des.h"
#include <string>
#include <iostream>
#include <ctime>
#include <random>
#include <cstdlib>
using namespace std;

des::des()
{
	face = 6;
}

int des::jetDes()
{
	int roll = 0;
	roll = rand() % face + 1;

	return roll;
}