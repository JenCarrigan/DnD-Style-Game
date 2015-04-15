#include "Creatures.h"
#include "Dice.h"
#include <iostream>
#include <ctime>

Goblin::Goblin()
{
	armor = 3;
	strength = 8;
	numberOfAttackDice = 2;
	numberOfDefDice = 1;
	numberOfSides = 6;
	srand((unsigned int)time(NULL));
}

int Goblin::getArmor()
{
	return armor;
}

int Goblin::getnumberOfAttackDice()
{
	return numberOfAttackDice;
}

int Goblin::getnumberOfDefDice()
{
	return numberOfDefDice;
}

int Goblin::getnumberOfSides()
{
	return numberOfSides;
}

int Goblin::getStrength()
{
	return strength;
}

void Goblin::setStrength(int strength)
{
	this->strength = strength;
	if (strength == -1)
	{
		this->strength = 8;
	}
}

std::string Goblin::getName()
{
	return "Goblin";
}

int Goblin::roll(int numberOfDice)
{
	int count = 0, result = 0;
	Dice die(6);

	while (count < numberOfDice)
	{
		result = die.rollDice() + result;
		count++;
	}
	return result;
}