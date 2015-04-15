#include "Dice.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

/*
Dice Class - used to instantiate Dice objects for rolls
*/

Dice::Dice()
{
	numSides = 6;
}

Dice::Dice(int numSides)
{
	this->numSides = numSides;
}

int Dice::rollDice() const
{
	return (rand() % numSides) + 1;
}