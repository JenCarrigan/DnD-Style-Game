#include "Creatures.h"
#include "Dice.h"
#include <iostream>
#include <ctime>

/*
Blue Men Class - overrides all but one Creature function
*/

Blumen::Blumen()
{
	armor = 3;
	strength = 12;
	numberOfAttackDice = 2;
	numberOfDefDice = 3;
	numberOfSides = 10;
	srand((unsigned int)time(NULL));
}

int Blumen::getArmor()
{
	return armor;
}

int Blumen::getnumberOfAttackDice()
{
	return numberOfAttackDice;
}

int Blumen::getnumberOfDefDice()
{
	return numberOfDefDice;
}

int Blumen::getnumberOfSides()
{
	return numberOfSides;
}

int Blumen::roll(int numberOfDice)
{
	int count = 0, temp = 0, result = 0;
	if (numberOfDice == 2)
	{
		while (count < numberOfDice)
		{
			Dice die(10);
			temp = die.rollDice();
			result = temp + result;
			count++;
		}
	}
	else
	{
		while (count < numberOfDice)
		{
			Dice die(6);
			temp = die.rollDice();
			result = temp + result;
			count++;
		}
	}
	return result;
}

int Blumen::getStrength()
{
	return strength;
}

void Blumen::setStrength(int strength)
{
	this->strength = strength;
	if (strength == -1)
	{
		this->strength = 12;
	}
}

std::string Blumen::getName()
{
	return "Blue Men";
}