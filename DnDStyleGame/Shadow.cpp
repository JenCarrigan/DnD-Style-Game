#include "Creatures.h"
#include "Dice.h"
#include <iostream>
#include <ctime>

/*
The Shadow Class - overrides all but one Creature function
*/

Shadow::Shadow()
{
	armor = 0;
	strength = 12;
	numberOfAttackDice = 2;
	numberOfDefDice = 1;
	numberOfSides = 10;
	srand((unsigned int)time(NULL));
}

int Shadow::getArmor()
{
	return armor;
}

int Shadow::getnumberOfAttackDice()
{
	return numberOfAttackDice;
}

int Shadow::getnumberOfDefDice()
{
	return numberOfDefDice;
}

int Shadow::getnumberOfSides()
{
	return numberOfSides;
}

int Shadow::getStrength()
{
	return strength;
}

void Shadow::setStrength(int strength)
{
	this->strength = strength;
	if (strength == -1)
	{
		this->strength = 12;
	}
}

std::string Shadow::getName()
{
	return "The Shadow";
}

int Shadow::roll(int numberOfDice)
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
			if ((rand() % 2 + 1) == 1)
			{
				result = 100000;
			}
			else
			{
				temp = die.rollDice();
				result = temp + result;
			}
			count++;
		}
	}
	return result;
}