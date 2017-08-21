#include "dtgreet.h"

#include <iostream>
using namespace std;
void DayGreeting(int day, int month, int year)
{
	cout << "Welcome Time Traveler! The year is: " << year << " The month is: " << month << " The Day is: " << day << endl;
}

void timeGreeting(int hours, int minutes)
{
	cout << "Your late for class! the time is: " << hours << ":" << minutes << "am" << endl;
}

bool isLeapYear(int years)
{
	if (years % 4 == 0)
	{
		if (years % 100 == 0)
		{
			return years % 400 == 0;
		}
		else
		{
			return true;
		}
	}
	else
	{
		return false;

	}
	// if the year is divisible by 4
	// if so is it also divisible by 100
	// if so is divisible by 400


	
}
