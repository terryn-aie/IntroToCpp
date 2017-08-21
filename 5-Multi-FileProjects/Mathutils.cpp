#include "Mathutils.h"
#include <cmath>
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
