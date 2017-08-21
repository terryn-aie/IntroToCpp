#include <iostream>
#include <cstdlib>

void printXY(int x, int y)
{
	for (int i = x; i <= y; ++i)
	{
		std::cout << i << std::endl;
	}
}

int promptLargest(int qtyRequested)
{
	std::cout << "Num Please!" << std::endl;

	int largest = 0;

	std::cin >> largest;	// use the first number as the new largest

	for (int i = 1; i < qtyRequested; ++i)
	{
		std::cout << "Num Please!" << std::endl;

		int input = 0;

		std::cin >> input;

		// check to see if we have a new largest
		if (input > largest)
		{
			largest = input;
		}
	}

	return largest;
}
int promptSmallest(int qtyRequested)
{
	std::cout << "Num Please!" << std::endl;

	int smallest = 0;

	std::cin >> smallest;

	for (int i = 1; i < qtyRequested; ++i)
	{
		std::cout << "Num Please!" << std::endl;

		int input = 0;

		std::cin >> input;

		// check to see if we have a new smallest
		if (input < smallest)
		{
			smallest = input;
		}
	}

	return smallest;
}

void EvenOrOdd(int start, int end)
{
	for (int i = start; i <= end; ++i)
	{
		if (i % 2 == 0)
		{
			std::cout << "Even" << std::endl;
		}
		else
		{
			std::cout << "Odd" << std::endl;
		}
	}
}

void fizzBuzz(int start, int end)
{
	for (int i = start; i <= end; ++i)
	{
		// multiple of 3?
		if (i % 3 == 0)
		{
			std::cout << "Fizz";

			// also of 5?
			if (i % 5 == 0)
			{
				std::cout << "Buzz";
			}
		}
		// multiple of 5
		else if (i % 5 == 0)
		{
			std::cout << "Buzz";
		}
		else
		{
			std::cout << i;
		}

		// newline
		std::cout << "\n";
	}
}

void guessTheNumber(int lower, int upper, int tryCount)
{
	// generate secret number
	int secret = rand() % (upper-lower) + lower;
	bool success = false;

	for (int i = 0; i < tryCount; ++i)
	{
		// prompt the user for input
		int input = 0;
		std::cout << "Make a Guess!" << " - Tries Remaining: " << tryCount - i << std::endl;
		std::cin >> input;

		// pass judgement on the input
		if (input > secret)
		{
			std::cout << "Too high!" << std::endl;
		}
		else if (input < secret)
		{
			std::cout << "Too low!" << std::endl;
		}
		else
		{
			success = true;
			break;
		}
	}

	if (success)
	{
		std::cout << "Ya did it! No bamboozle!!!" << std::endl;
	}
	else
	{
		std::cout << "Aw shucks. Ya got bamboozled." << std::endl;
	}
}

void gridGen(int width, int height)
{
	/*
	for (int i = 0; i < height; ++i)
	{
		// printing out the characters for that line
		for (int j = 0; j < width; ++j)
		{
			std::cout << "X";
		}

		std::cout << "\n";
	}
	*/
	for (int i = 1; i <= height * width; ++i)
	{
		std::cout << "X";

		// are we at the end of a line?
		if (i % width == 0)
		{
			std::cout << "\n";
		}
	}


}

int main()
{
	// 1 to 100
	for (int i = 1; i <= 100; ++i)
	{
		std::cout << i << std::endl;
	}

	// 100 to 1
	int toOne = 100;
	while (toOne >= 1)
	{
		std::cout << toOne << std::endl;
		--toOne;
	}

	// 1995 to 2017
	int year = 1995;
	do
	{
		std::cout << year << std::endl;
		++year;
	} while (year <= 2017);

	// X to Y
	printXY(1, 3);
	//std::cout << "Largest:" << promptLargest(3) << std::endl;
	//std::cout << "Smallest:" << promptSmallest(3) << std::endl;

	EvenOrOdd(0, 5);

	std::cout << "\n\n";
	fizzBuzz(1, 16);
	gridGen(3, 5);
	guessTheNumber(1, 8, 3);

	system("pause");
}