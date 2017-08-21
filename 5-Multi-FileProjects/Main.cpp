#include "Mathutils.h"
#include "dtgreet.h"
#include "rng.h"
#include <iostream>
using namespace std;

int main()
{
	/*cout << min(1, 42) << endl;
	cout << max(1, 42) <<endl;
	cout << clamp(15, 30, 65) << endl;
	cout << dist(0, 0, 0, 4) << endl;
	
	DayGreeting(28, 7, 1998);
	timeGreeting(11, 54);*/
	seedRng(13);
	cout << rng() << endl;
	cout << rngRange(15, 30) << endl;
	cout << rngb() << endl;
	cout << rngBchance(0) << endl;
	/*cout << isLeapYear(2017) << endl;*/
	system("pause");
	
}