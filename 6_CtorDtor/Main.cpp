#include <iostream>
#include <cstring>

class Player
{
public:
	char Name[32];
	int Score;
	float Health;

	// default ctor
	Player()
	{
		std::cout << "CONSTRUCTED!" << std::endl;
		Score = 0;
		Health = 100.0f;
	}

	// parameterized ctor
	Player(const char* InputName) : Player()
	{
		strcpy_s(Name, InputName);
	}
};

int main()
{
	{
		Player John("John");
	}

	Player Donn("Donn");
	Player Ethh("Ethh");

	return 0;
}