#include <iostream>
#include "Creature.h"
#include "Dice.h"

/*
Header file for ALL creatures that override Creature
Barbarian
Goblin
Reptile People
Blue Men
The Shadow
*/

#ifndef _Creatures_h
#define _Creatures_h

class Barbarian : public Creature
{
private:
	int armor;
	int numberOfAttackDice;
	int numberOfDefDice;
	int numberOfSides;
public:
	Barbarian();
	int getArmor();
	int getnumberOfAttackDice();
	int getnumberOfDefDice();
	int getnumberOfSides();
	virtual int roll(int numberOfDice);
	virtual std::string getName();
	virtual void setStrength(int strength);
	virtual int getStrength();
};

class Reptile : public Creature
{
private:
	int armor;
	int numberOfAttackDice;
	int numberOfDefDice;
	int numberOfSides;
public:
	Reptile();
	int getArmor();
	int getnumberOfAttackDice();
	int getnumberOfDefDice();
	int getnumberOfSides();
	virtual int roll(int numberOfDice);
	virtual std::string getName();
	virtual void setStrength(int strength);
	virtual int getStrength();
};

class Blumen : public Creature
{
private:
	int armor;
	int numberOfAttackDice;
	int numberOfDefDice;
	int numberOfSides;
public:
	Blumen();
	int getArmor();
	int getnumberOfAttackDice();
	int getnumberOfDefDice();
	int getnumberOfSides();
	virtual int roll(int numberOfDice);
	virtual std::string getName();
	virtual void setStrength(int strength);
	virtual int getStrength();
};

class Shadow : public Creature
{
private:
	int armor;
	int numberOfAttackDice;
	int numberOfDefDice;
	int numberOfSides;
public:
	Shadow();
	int getArmor();
	int getnumberOfAttackDice();
	int getnumberOfDefDice();
	int getnumberOfSides();
	virtual int roll(int numberOfDice);
	virtual std::string getName();
	virtual void setStrength(int strength);
	virtual int getStrength();
};

class Goblin : public Creature
{
private:
	int armor;
	int numberOfAttackDice;
	int numberOfDefDice;
	int numberOfSides;
public:
	Goblin();
	int getArmor();
	int getnumberOfAttackDice();
	int getnumberOfDefDice();
	int getnumberOfSides();
	virtual int roll(int numberOfDice);
	virtual std::string getName();
	virtual void setStrength(int strength);
	virtual int getStrength();
};

#endif
