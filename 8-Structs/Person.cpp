#include "Person.h"

#include <iostream>

// define that function
void describePerson(Person person)
{
	std::cout << "Age: " << person.age << std::endl;
	std::cout << "Wgt: " << person.weight << std::endl;
	std::cout << "CHA: " << person.charisma;
	std::cout << " STR: " << person.strength;
	std::cout << " DEX: " << person.dexterity;

	person.age = -1;
}

void levelUp(Person &person)
{
	person.age = person.age + 1;
}