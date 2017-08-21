#include "rng.h"
#include <random>
void seedRng(int seed)
{
	srand(seed);
}

int rng()
{
	return rand() % 100 + 1;
}

int rngRange(int min, int max)
{
	return rand() % max + min;
}

bool rngb()
{
	return rand() % 1;
}

bool rngBchance(int chance)
{
	// chance is 75, there is a 75% of true
	// random value equal a range of 0 to 100, dice roll
	int rando = rand() % 100 + 1;

	/*if (rando <= chance)
	{
		return true;
	}
	else
	{
		return false;
	}*/

	return (rando <= chance);
}
