#include "Dice.h"
#include "Creature.h"
#include "Creatures.h"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

/*
Function to randomize who goes first

Really only works when the two players choose two different characters
*/

bool goesFirst(const Dice &die)
{
	if (die.rollDice() == 1 || die.rollDice() == 2 || die.rollDice() == 3)
		return true;
	else
		return false;
}

/*
Main Function

Let's players choose their characters. Instantiates pointers to characters and calls playGame function from Creature.cpp

do-while loop makes sure players return to menu after game.
*/
int main()
{
	char again;
	do
	{
		int choice1, choice2;

		std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		std::cout << "Welcome to the game!\n";
		std::cout << "Players, please look over the characters...\n\n";

		std::cout << "1. Goblin" << std::endl
			<< "2. Barbarian" << std::endl
			<< "3. Reptile People" << std::endl
			<< "4. Blue Men" << std::endl
			<< "5. The Shadow" << std::endl;

		std::cout << "\n\nWhich character would the players like to play? Enter your choices separated by a space: ";
		std::cin >> choice1 >> choice2;
		Dice die(6);

		if (choice1 == 1)
		{
			if (choice2 == 1)
			{
				Goblin *gob1 = new Goblin();
				Goblin *gob2 = new Goblin();
				if (goesFirst(die))
					gob1->playGame(gob2);
				else
					gob2->playGame(gob1);
			}
			else if (choice2 == 2)
			{
				Goblin *gob = new Goblin();
				Barbarian *bar = new Barbarian();
				if (goesFirst(die))
					gob->playGame(bar);
				else
					bar->playGame(gob);
			}
			else if (choice2 == 3)
			{
				Goblin *gob = new Goblin();
				Reptile *rep = new Reptile();
				if (goesFirst(die))
					gob->playGame(rep);
				else
					rep->playGame(gob);
			}
			else if (choice2 == 4)
			{
				Goblin *gob = new Goblin();
				Blumen *blu = new Blumen();
				if (goesFirst(die))
					gob->playGame(blu);
				else
					blu->playGame(gob);
			}
			else
			{
				Goblin *gob = new Goblin();
				Shadow *sha = new Shadow();
				if (goesFirst(die))
					gob->playGame(sha);
				else
					sha->playGame(gob);
			}
		}
		else if (choice1 == 2)
		{
			if (choice2 == 1)
			{
				Goblin *gob = new Goblin();
				Barbarian *bar = new Barbarian();
				if (goesFirst(die))
					gob->playGame(bar);
				else
					bar->playGame(gob);
			}
			else if (choice2 == 2)
			{
				Barbarian *bar1 = new Barbarian();
				Barbarian *bar2 = new Barbarian();

				if (goesFirst(die))
					bar1->playGame(bar2);
				else
					bar2->playGame(bar1);
			}
			else if (choice2 == 3)
			{
				Barbarian *bar = new Barbarian();
				Reptile *rep = new Reptile();
				if (goesFirst(die))
					bar->playGame(rep);
				else
					rep->playGame(bar);
			}
			else if (choice2 == 4)
			{
				Barbarian *bar = new Barbarian();
				Blumen *blu = new Blumen();
				if (goesFirst(die))
					bar->playGame(blu);
				else
					blu->playGame(bar);
			}
			else
			{
				Barbarian *bar = new Barbarian();
				Shadow *sha = new Shadow();
				if (goesFirst(die))
					bar->playGame(sha);
				else
					sha->playGame(bar);
			}
		}
		else if (choice1 == 3)
		{
			if (choice2 == 1)
			{
				Goblin *gob = new Goblin();
				Reptile *rep = new Reptile();
				if (goesFirst(die))
					gob->playGame(rep);
				else
					rep->playGame(gob);
			}
			else if (choice2 == 2)
			{
				Barbarian *bar = new Barbarian();
				Reptile *rep = new Reptile();
				if (goesFirst(die))
					bar->playGame(rep);
				else
					rep->playGame(bar);
			}
			else if (choice2 == 3)
			{
				Reptile *rep1 = new Reptile();
				Reptile *rep2 = new Reptile();
				if (goesFirst(die))
					rep1->playGame(rep2);
				else
					rep2->playGame(rep1);
			}
			else if (choice2 == 4)
			{
				Reptile *rep = new Reptile();
				Blumen *blu = new Blumen();
				if (goesFirst(die))
					rep->playGame(blu);
				else
					blu->playGame(rep);
			}
			else
			{
				Reptile *rep = new Reptile();
				Shadow *sha = new Shadow();
				if (goesFirst(die))
					sha->playGame(rep);
				else
					rep->playGame(sha);
			}
		}
		else if (choice1 == 4)
		{
			if (choice2 == 1)
			{
				Goblin *gob = new Goblin();
				Blumen *blu = new Blumen();
				if (goesFirst(die))
					gob->playGame(blu);
				else
					blu->playGame(gob);
			}
			else if (choice2 == 2)
			{
				Barbarian *bar = new Barbarian();
				Blumen *blu = new Blumen();
				if (goesFirst(die))
					bar->playGame(blu);
				else
					blu->playGame(bar);
			}
			else if (choice2 == 3)
			{
				Reptile *rep = new Reptile();
				Blumen *blu = new Blumen();
				if (goesFirst(die))
					blu->playGame(rep);
				else
					rep->playGame(blu);
			}
			else if (choice2 == 4)
			{
				Blumen *blu1 = new Blumen();
				Blumen *blu2 = new Blumen();
				if (goesFirst(die))
					blu1->playGame(blu2);
				else
					blu2->playGame(blu1);
			}
			else
			{
				Blumen *blu = new Blumen();
				Shadow *sha = new Shadow();
				if (goesFirst(die))
					blu->playGame(sha);
				else
					sha->playGame(blu);
			}
		}
		else
		{
			if (choice2 == 1)
			{
				Goblin *gob = new Goblin();
				Shadow *sha = new Shadow();
				if (goesFirst(die))
					gob->playGame(sha);
				else
					sha->playGame(gob);
			}
			else if (choice2 == 2)
			{
				Barbarian *bar = new Barbarian();
				Shadow *sha = new Shadow();
				if (goesFirst(die))
					bar->playGame(sha);
				else
					sha->playGame(bar);
			}
			else if (choice2 == 3)
			{
				Reptile *rep = new Reptile();
				Shadow *sha = new Shadow();
				if (goesFirst(die))
					sha->playGame(rep);
				else
					rep->playGame(sha);
			}
			else if (choice2 == 4)
			{
				Blumen *blu = new Blumen();
				Shadow *sha = new Shadow();
				if (goesFirst(die))
					blu->playGame(sha);
				else
					sha->playGame(blu);
			}
			else
			{
				Shadow *sha1 = new Shadow();
				Shadow *sha2 = new Shadow();
				if (goesFirst(die))
					sha1->playGame(sha2);
				else
					sha2->playGame(sha1);
			}
		}
		std::cout << "Would you like to play again (Y/N) ?  ";
		std::cin >> again;
	}
	while (again == 'y' || again == 'Y');

	return 0;
}
