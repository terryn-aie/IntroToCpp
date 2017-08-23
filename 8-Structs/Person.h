#pragma once

struct Person
{
	int age;
	float weight;

	int charisma;
	int strength;
	int dexterity;

	float cash;
};

// declared a function
void describePerson(Person person);
void levelUp(Person &person);