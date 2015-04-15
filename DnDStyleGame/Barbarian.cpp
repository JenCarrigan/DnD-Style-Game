#include "Creatures.h"
#include "Dice.h"
#include <iostream>
#include <ctime>

/*
Barbarian class - overrides all but one Creature function
*/

Barbarian::Barbarian()
{
	armor = 0;
	strength = 12;
	numberOfAttackDice = 2;
	numberOfDefDice = 2;
	numberOfSides = 6;
	srand((unsigned int)time(NULL));
}

int Barbarian::getArmor()
{
	return armor;
}

int Barbarian::getStrength()
{
	return strength;
}

int Barbarian::getnumberOfAttackDice()
{
	return numberOfAttackDice;
}

int Barbarian::getnumberOfDefDice()
{
	return numberOfDefDice;
}

int Barbarian::getnumberOfSides()
{
	return numberOfSides;
}

void Barbarian::setStrength(int strength)
{
	this->strength = strength;
	if (strength == -1)
	{
		this->strength = 12;
	}
}

std::string Barbarian::getName()
{
	return "Barbarian";
}

int Barbarian::roll(int numberOfDice)
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