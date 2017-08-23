#include "Person.h"
#include "piggybank.h"
#include "student.h"
#include "vector2d.h"
#include "battle.h"

int main()
{
	piggybank bank{ 2, 2, 1, 4, 10, 20, 95 };

	float coins = calcPiggybankCoins(bank);
	float notes = calcPiggybankNotes(bank);
	float total = calcPiggybankTotal(bank);

	student me{ 12006, 1, 45 };

	student classroom[] =
	{
		{12006, 1, 45},
		{12007, 2, 29},
		{12008, 2, 32},
		{12009, 1, 40},
		{12010, 2, 47},
		{12011, 2, 38}
	};

	printStudent(me);

	float avg = avgTestScore(classroom, 6);	// 38.5
	float med = medTestScore(classroom, 6); // 39

	int courseA = enrollmentCount(classroom, 6, 1);
	int courseB = enrollmentCount(classroom, 6, 2);

	vec2d a = { 0,0 };
	vec2d b = { 0,1 };

	vec2d vSum = sum(a, b);
	vec2d vDiff = diff(a, b);
	float vDist = dist(a, b);

	Entity fighterA = {20, 8, 1};
	Entity fighterB = {30, 7, 2};

	battle(fighterA, fighterB);

	while (true) {}	// 
}