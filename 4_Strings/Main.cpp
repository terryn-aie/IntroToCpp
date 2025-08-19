#include <iostream>
#include <cstring>

void Greetings()
{
	std::cout << "What's your name, user?" << std::endl;
	char Name[256] = "";

	std::cin.getline(Name, 256);

	std::cout << "Good day, " << Name << ", hope your code goes smoothly." << std::endl;
}

void FavoriteColor()
{
	std::cout << "What's your favorite color" << std::endl;
	char Color[256] = "";

	std::cin.getline(Color, 256);

	if (strcmp(Color, "Orange") == 0)
	{
		std::cout << "Orange is my favorite color too!" << std::endl;
	}
	else if (strcmp(Color, "Red") == 0)
	{
		std::cout << "Red is one of the primary colors." << std::endl;
	}
	else
	{
		std::cout << Color << " sounds like a nice color." << std::endl;
	}
}

void ToUpper(char CString[])
{
	for (int i = 0; CString[i] != '\0'; ++i)
	{
		// is it a lower-case letter?
		if (CString[i] >= 97 && CString[i] <= 122)
		{
			CString[i] -= 32;
		}
	}
}

void RemoveWhitespace(char CString[])
{
	for (int i = 0; CString[i] != '\0'; ++i)
	{
		// is this character white space?
		if (CString[i] == 32)
		{
			// move everything down the line...
			for (int j = i; CString[j] != '\0'; ++j)
			{
				CString[j] = CString[j + 1];
			}
		}
	}
}

int main()
{
	//char Dest[256];
	//strcpy_s(Dest, 256, "Johnny");

	//char UserInput[256];
	//while (true)
	//{
	//	std::cout << "CIN to INT (formatted)" << std::endl;
	//	int Number = 0;
	//	std::cin >> Number;
	//	std::cin.clear();
	//	std::cin.ignore(INT_MAX, '\n');
	//	std::cout << "You gave: " << Number << std::endl;

	//	std::cout << "GETLINE (unformatted)" << std::endl;
	//	std::cin.getline(UserInput, 256);
	//	std::cout << "You wrote: " << UserInput << std::endl;
	//}

	//Greetings();
	//FavoriteColor();
	//char ToUpperTestA[] = "The box is red.";
	//ToUpper(ToUpperTestA);
	//std::cout << ToUpperTestA << std::endl;

	char RemoveWhitespaceTestA[] = "Dinosaurs are amazing.";
	RemoveWhitespace(RemoveWhitespaceTestA);

	return 0;
}