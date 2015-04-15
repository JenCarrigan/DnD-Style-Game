#include "Creature.h"
#include "Dice.h"
#include <iostream>
#include <string>
#include <ctime>

/*
Creature Implementation

Holds playGame function

Takes pointer to creature object as parameter

Plays game until one player has no more strength left

*/

Creature::Creature()
{
	name = "***";
	strength = 0;
	armor = 0;
}

void Creature::playGame(Creature *creature1)
{
	this->setStrength(-1);
	creature1->setStrength(-1);

	bool playerOne = true, playerTwo = false, gameOver = false, achilles = false;

	while (this->getStrength() > 0 && creature1->getStrength() > 0)
	{
		while (playerOne && !gameOver)
		{
			int attack = 0, defense = 0, damage = 0, applyDamage = 0;
			char roll;
			std::cout << "Player One, " << this->getName() << ", hit R to roll attack: ";
			std::cin >> roll;

			if (roll == 'R' || roll == 'r')
			{
				if (!achilles)
				{
					attack = this->roll(this->getnumberOfAttackDice());
					std::cout << "Player One's attack is: " << attack << std::endl << std::endl;
					if (this->getName() == "Goblin" && creature1->getName() != "Goblin" && attack == 12)
					{
						achilles = true;
					}
				}
				else
				{
					attack = (this->roll(this->getnumberOfAttackDice())) / 2;
					std::cout << "Player One's attack is: " << attack << std::endl;
				}
			}
			else
			{
				std::cout << "Sorry to be brutal, but since you didn't press R (probably you have fat fingers), it's the next player's turn!\n\n";
				playerOne = false, playerTwo = true;
			}

			std::cout << "Player Two, " << creature1->getName() << ", hit R to roll defense: ";
			std::cin >> roll;

			if (roll == 'R' || roll == 'r')
			{
				defense = creature1->roll(creature1->getnumberOfDefDice());
				std::cout << "Player Two's defense roll is: " << defense << std::endl << std::endl;
			}
			else
			{
				std::cout << "Sorry to be brutal, but since you didn't press R (probably you have fat fingers), it's the next player's turn!\n\n";
			}

			damage = attack - defense;

			if (damage <= 0)
			{
				//std::cout << damage << std::endl;
				std::cout << "Sorry! No damage was done!\n\n";
				playerOne = false;
				playerTwo = true;
			}
			else
			{
				applyDamage = damage - creature1->getArmor();
				if (applyDamage <= 0)
				{
					//std::cout << applyDamage << std::endl;
					std::cout << "Sorry! No damage was done!\n\n";
					playerOne = false;
					playerTwo = true;
				}
				else
				{
					//std::cout << applyDamage << std::endl;
					creature1->setStrength(creature1->getStrength() - applyDamage);
					if (creature1->getStrength() <= 0)
					{
						gameOver = true;
					}
					if (gameOver)
						break;
					std::cout << "Player Two, " << creature1->getName() << ", has " << creature1->getStrength() << " strength left!\n\n";
					playerOne = false;
					playerTwo = true;
				}
			}
		}

		while (playerTwo && !gameOver)
		{
			int attack = 0, defense = 0, damage = 0, applyDamage = 0;
			char roll;
			std::cout << "Player Two, " << creature1->getName() << ", hit R to roll attack: ";
			std::cin >> roll;

			if (roll == 'R' || roll == 'r')
			{
				if (!achilles)
				{
					attack = creature1->roll(creature1->getnumberOfAttackDice());
					std::cout << "Player Two's attack roll is: " << attack << std::endl << std::endl;
					if (creature1->getName() == "Goblin" && this->getName() != "Goblin" && attack == 12)
					{
						achilles = true;
					}
				}
				else
				{
					attack = (creature1->roll(creature1->getnumberOfAttackDice())) / 2;
					std::cout << "Player Two's attack roll is: " << attack << std::endl << std::endl;
				}
			}
			else
			{
				std::cout << "Sorry to be brutal, but since you didn't press R (probably you have fat fingers), it's the next player's turn!\n\n";
				playerOne = true, playerTwo = false;
			}

			std::cout << "Player One, " << this->getName() << ", hit R to roll defense: ";
			std::cin >> roll;

			if (roll == 'R' || roll == 'r')
			{
				defense = this->roll(this->getnumberOfDefDice());
				std::cout << "Player Two's defense roll is: " << defense << std::endl << std::endl;
			}
			else
			{
				std::cout << "Sorry to be brutal, but since you didn't press R (probably you have fat fingers), it's the next player's turn!\n\n";
			}

			damage = attack - defense;

			if (damage <= 0)
			{
				//std::cout << damage << std::endl;
				std::cout << "Sorry! No damage was done!\n\n";
				playerOne = true;
				playerTwo = false;
			}
			else
			{
				applyDamage = damage - this->getArmor();
				if (applyDamage <= 0)
				{
					//std::cout << applyDamage << std::endl;
					std::cout << "Sorry! No damage was done!\n\n";
					playerOne = true;
					playerTwo = false;
				}
				else
				{
					//std::cout << applyDamage << std::endl;
					this->setStrength(this->getStrength() - applyDamage);
					if (this->getStrength() <= 0)
					{
						gameOver = true;
					}
					if (gameOver)
						break;
					std::cout << "Player One, " << this->getName() << ", has " << this->getStrength() << " strength left!\n\n";
					playerOne = true;
					playerTwo = false;
				}
			}
		}
		if (gameOver)
			break;
	}

	if (this->getStrength() <= 0)
	{
		std::cout << "\n\nPlayer One, the " << this->getName() << ", loses!\n\n";
		return;
	}
	if (creature1->getStrength() <= 0)
	{
		std::cout << "\n\nPlayer Two, the " << creature1->getName() << ", loses!\n\n";
		return;
	}

	std::cin.get();
}
