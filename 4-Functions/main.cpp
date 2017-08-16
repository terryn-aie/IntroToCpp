#include <iostream>
#include <cmath>

void printHelloFuncs();
int squareInt(int val);
int fracToDec(int num, int den);
float largestDiff(float a, float b, float c);

void printNumbers(int a, int b)
{
	std::cout << a << "," << b;
}
void printBool(bool b)
{
	if (b)
	{
		std::cout << "true";
	}
	else
	{
		std::cout << "false";
	}
}
int sumOfThree(int a, int b, int c)
{
	return a + b + c;
}

int min(int a, int b)
{
	if (a < b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
int max(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int clamp(int lower, int upper, int value)
{
	int number = value;

	if (number < lower)
	{
		number = lower;
	}
	else if (number > upper)
	{
		number = upper;
	}

	return number;
}

float dist(float x1, float y1, float x2, float y2)
{
	return sqrtf(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
}
float eta(float x1, float y1, float x2, float y2, float unitsPerSec)
{
	return dist(x1, y1, x2, y2) / unitsPerSec;
}

int main()
{
	float sq = sqrtf(144.0f);

	float mn = min(5, 2);
	float mx = max(7, 7);
	float cp = clamp(15, 30, 34);
	float ds = dist(7, 23, 9, 0);
	float ea = eta(4, 4, 4, 8, 4);

	system("pause");
}