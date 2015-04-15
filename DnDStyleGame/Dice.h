#ifndef _Dice_h
#define _Dice_h

/*
Headerfile for Dice class. Abstract
*/

class Dice
{
public:
	Dice();
	Dice(int numSides);
	virtual int rollDice() const;
protected:
	int numSides;
};

#endif