#include "battle.h"

#include <iostream>

void printEntity(Entity target)
{
	std::cout << target.hitPoints << std::endl;
	std::cout << target.atkPoints << std::endl;
	std::cout << target.defPoints << std::endl;
}

void battle(Entity combatantA, Entity combatantB)
{
	bool inProgress = true;

	while (inProgress)
	{
		// print out playerA
		std::cout << "Player Stats" << std::endl;
		printEntity(combatantA);

		// print out playerB
		std::cout << "Zombie Stats" << std::endl;
		printEntity(combatantB);

		// do battle!notep
		combatantA.hitPoints -= combatantB.atkPoints - combatantA.defPoints;
		combatantB.hitPoints -= combatantA.atkPoints - combatantB.defPoints;

		// check if the battle is over
		inProgress = combatantA.hitPoints > 0 && combatantB.hitPoints > 0;
	}

	// announce the results
	std::cout << "The battle is over!";

	if (combatantA.hitPoints > 0)
	{
		std::cout << "Player has emerged victorious!" << std::endl;
	}
	else if (combatantB.hitPoints > 0)
	{
		std::cout << "Zombie has emerged victorious!" << std::endl;
	}
	else
	{
		std::cout << "All fighters have perished.";
	}
}