#include <iostream>

void printNumbers(int nums[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << nums[i] << std::endl;
	}
}

int sumNumbers(int num[], int size)
{
	int total = 0;

	for (int i = 0; i < size; ++i)
	{
		total = total + num[i];
	}

	return total;
}

int smallestValue(int num[], int size)
{
	int smallest = INT_MAX;

	for (int i = 0; i < size; ++i)
	{
		if (num[i] < smallest)
		{
			smallest = num[i];
		}
	}

	return smallest;
}

int largestValue(int num[], int size)
{
	int largest = INT_MIN;

	for (int i = 0; i < size; ++i)
	{
		if (num[i] > largest)
		{
			largest = num[i];
		}
	}

	return largest;
}

int findIndex(int num[], int size, int value)
{
	for (int i = 0; i < size; ++i)
	{
		if (num[i] == value)
		{
			return i;
		}
	}

	return -1;
}

bool isUnique(int num[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			if (i != j && num[i] == num[j])
			{
				return true;
			}
		}
	}

	return false;
}

void reverse(int num[], int size)
{
	for (int i = 0; i < size / 2; ++i)
	{
		// hold onto the number in the front
		int temp = num[i];

		// set the front to the back
		num[i] = num[size - 1 - i];

		// set the back to the front
		num[size - 1 - i] = temp;
	}
}

void sortAscend(int num[], int size)
{
	while (true)
	{
		bool isSorted = true;

		for (int i = 0; i < size - 1; ++i)
		{
			// is the adjacent value larger than my current value?
			if (num[i] > num[i + 1])
			{
				// if so, let's swap'em!
				int temp = num[i];			// holds the original left val

				num[i] = num[i + 1];		// put the right into the left
				num[i + 1] = temp;			// put the orig left into the right

				isSorted = false;
			}
		}

		if (isSorted)
		{
			break;
		}
	}
}

void sortDescend(int num[], int size)
{
	/*
	sortAscend(num, size);	// put it in asc lolol
	reverse(num, size);		// and then reverse it to get desc lolol
	*/

	while (true)
	{
		bool isSorted = true;

		for (int i = 0; i < size - 1; ++i)
		{
			// is the adjacent value smallest than my current value?
			if (num[i] < num[i + 1])
			{
				// if so, let's swap'em!
				int temp = num[i];			// holds the original left val

				num[i] = num[i + 1];		// put the right into the left
				num[i + 1] = temp;			// put the orig left into the right

				isSorted = false;
			}
		}

		if (isSorted)
		{
			break;
		}
	}
}

int main()
{
	int test[]{ 0,2,4,6 };

	printNumbers(test, 4);
	std::cout << "Sum " << sumNumbers(test, 4) << std::endl;
	std::cout << "Smallest " << smallestValue(test, 4) << std::endl;
	std::cout << "Largest " << largestValue(test, 4) << std::endl;
	std::cout << "Find 4 {0,2,4,6} " << findIndex(test, 4, 4) << std::endl;
	std::cout << "Find 9 {0,2,4,6} " << findIndex(test, 4, 9) << std::endl;

	reverse(test, 4);
	std::cout << "Reverse {0,2,4,6} " << std::endl;
	printNumbers(test, 4);

	sortAscend(test, 4);
	std::cout << "Sort Asc" << std::endl;
	printNumbers(test, 4);

	sortDescend(test, 4);
	std::cout << "Sort Desc" << std::endl;
	printNumbers(test, 4);

	system("pause");
}