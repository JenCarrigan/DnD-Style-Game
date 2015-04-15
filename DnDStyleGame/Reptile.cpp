#include "Creatures.h"
#include "Dice.h"
#include <iostream>
#include <ctime>

/*
Reptile People Class - overrides all but one Creature function
*/

Reptile::Reptile()
{
	armor = 7;
	strength = 18;
	numberOfAttackDice = 3;
	numberOfDefDice = 2;
	numberOfSides = 6;
	srand((unsigned int)time(NULL));
}

int Reptile::getArmor()
{
	return armor;
}

int Reptile::getnumberOfAttackDice()
{
	return numberOfAttackDice;
}

int Reptile::getnumberOfDefDice()
{
	return numberOfDefDice;
}

int Reptile::getnumberOfSides()
{
	return numberOfSides;
}

int Reptile::getStrength()
{
	return strength;
}

void Reptile::setStrength(int strength)
{
	this->strength = strength;
	if (strength == -1)
	{
		this->strength = 18;
	}
}

std::string Reptile::getName()
{
	return "Reptile People";
}

int Reptile::roll(int numberOfDice)
{
	int count = 0, result = 0;
	Dice die;

	while (count < numberOfDice)
	{
		result = die.rollDice() + result;
		count++;
	}
	return result;
}