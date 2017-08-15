#include <iostream>

//using namespace std;	// terry is a sad puppy

using std::cout;		// terry is pleased
using std::cin;
using std::endl;

int main()
{
	// Celsius to Fahrenheit)
	float degCelsius = 78.0f;
	float degFahrenheit = 0.0f;

	//cout << "Please enter a value in Celsius to convert." << endl;
	//cin >> degCelsius;

	degFahrenheit = degCelsius * (9.f / 5.f) + 32;

	std::cout << "Celsius to Fahrenheit)\n";
	std::cout << "Celsius:    " << degCelsius << std::endl;
	std::cout << "Fahrenheit: " << degFahrenheit << std::endl;

	// Area of a Rectangle)
	float rectWidth = 4.0f;
	float rectHeight = 5.0f;
	float rectArea = 0.0f;

	/*
	std::cout << "Enter the height!" << std::endl;
	std::cin >> rectHeight;

	std::cout << "Enter the width!" << std::endl;
	std::cin >> rectWidth;
	*/

	rectArea = rectHeight * rectWidth;

	std::cout << "Area of a Rectangle)" << std::endl;
	std::cout << "H: " << rectHeight << " , W: " << rectWidth << std::endl;
	std::cout << "Area: " << rectArea << std::endl;

	// Average of Five)

	float a, b, c, d, e;
	float avg;
	avg = a = b = c = d = e = 0.0f;

	/*
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	std::cin >> d;
	std::cin >> e;
	*/
	avg = (a + b + c + d + e) / 5.0f;

	std::cout << "Avg)\n";
	std::cout << a << "," << b << "," << c << "," << d << "," << e << std::endl;
	std::cout << "avg: " << avg << std::endl;

	// Number Swap)
	int x = 13;
	int y = 24;

	int temp = x;
	x = y;
	y = temp;

	std::cout << "Number Swap)\n";
	std::cout << x << "," << y << "\n";

	// Fun Facts for Your Age)
	int age = 22;

	std::cout << "Howdy! You're " << age << " years old!\n";
	std::cout << "Decades Existed: " << age / 10 << "\n";
	std::cout << "Scores Existed: " << age / 20 << "\n";

	system("pause");
}