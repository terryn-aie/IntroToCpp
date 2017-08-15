#include <iostream>

int main()
{
	// Clamp the Number
	std::cout << "Give me a range and a number!" << std::endl;
	int lower = 0;
	int upper = 0;
	int value = 0;

	std::cin >> lower;
	std::cin >> upper;
	std::cin >> value;

	if (value < lower)
	{
		value = lower;
	}
	else if (value > upper)
	{
		value = upper;
	}

	std::cout << value << " is your clamped val\n\n"; 

	// Even or Odd)
	std::cout << "Give a number and I'll tell you if it's even or odd.\n";
	int userEvenOrOdd = 0;
	std::cin >> userEvenOrOdd;

	if (!(userEvenOrOdd % 2))
	{
		std::cout << "Even\n";
	}
	else
	{
		std::cout << "Odd\n";
	}

	system("pause");

	// Smallest of Three)
	std::cout << "Give me three numbers!" << std::endl;
	int smallest = 7897897899;

	int userNumber = 0;

	std::cin >> userNumber;		// 150
	if (userNumber < smallest)
	{
		smallest = userNumber;
	}

	std::cin >> userNumber;
	if (userNumber < smallest)	// 190
	{
		smallest = userNumber;
	}

	std::cin >> userNumber;
	if (userNumber < smallest)	// 500
	{
		smallest = userNumber;
	}

	std::cout << smallest << " was the smallest!" << std::endl;

	

	// Number Judging)
	std::cout << "Give number from 1 to 100!" << std::endl;
	int userNum = 50;
	//std::cin >> userNum;

	std::cout << "Your number was " << userNum << "!\n";

	if (userNum > 50)
	{
		std::cout << "It's a LARGE number! :OOOOOOO" << std::endl;
	}
	else if (userNum < 50)
	{
		std::cout << "It's a small number. :|" << std::endl;
	}
	else if (userNum == 50)
	{
		std::cout << "It's a balaNCED number. :D" << std::endl;
	}

	// Age Gate)
	std::cout << "How old are you?" << std::endl;
	int userAge = 0;
	//std::cin >> userAge;

	if (userAge < 18)
	{
		std::cout << "MINOR.\n";
	}
	else if (userAge >= 18)
	{
		std::cout << "You're an adult!\n";
	}

	if (userAge >= 50)
	{
		std::cout << "You're eligible to join AARP! Congrats!\n";
	}
	
	if (userAge >= 65)
	{
		std::cout << "You're eligible for retirement benefits!\n";
	}




	system("pause");
}