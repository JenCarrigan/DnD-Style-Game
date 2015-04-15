#include <iostream>
#include <string>

/*
Pure virtual/abstract class: Creature
*/

#ifndef _Creature_h
#define _Creature_h

class Creature
{
protected:
	int strength;
	std::string name;
	int armor;
public:
	Creature();
	virtual int getArmor() = 0;
	virtual std::string getName() = 0;
	virtual int getStrength() = 0;
	virtual void setStrength(int strength) = 0;
	void playGame(Creature *creature1);
	virtual int getnumberOfAttackDice() = 0;
	virtual int getnumberOfDefDice() = 0;
	virtual int getnumberOfSides() = 0;
	virtual int roll(int numberOfDice) = 0;
};

#endif