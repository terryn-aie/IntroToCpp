#include <iostream>
#include <vector>
#include <map>

int Sum(int Numbers[])
{
	std::cout << Numbers << std::endl;

	// stub
	return 0;
}

int SumOtherSyntax(int* Numbers)
{
	std::cout << Numbers << std::endl;

	// stub
	return 0;
}

struct Vector2
{
	float X;
	float Y;

	void Print()
	{
		std::cout << X << ',' << Y << std::endl;
	}
};

struct Player
{
	Vector2 Position;
};

struct Enemy
{
	Player* Target;
};

int main()
{
	std::vector<Player> MultiPlayer;
	std::map<int, Player> PlayersById;

	auto PlayerIt = MultiPlayer.begin();
	std::vector<Player>::iterator PlayerItTwo;

	int Numbahs[] = { 1,5468,5468,5468,15463,468,5468,3 };
	Sum(Numbahs);
	SumOtherSyntax(Numbahs);

	Player* SomeTarget = nullptr;
	SomeTarget->Position.Print();

	return 0;

	Player P1;
	P1.Position = { 150, 350 };

	Enemy Charger1;
	Charger1.Target = &P1;

	Enemy BileMan1;
	BileMan1.Target = &P1;

	P1.Position = { 631, 891 };

	std::cout << "Charger1 Target: ";
	Charger1.Target->Position.Print();
	std::cout << "BileMan1 Target: ";
	BileMan1.Target->Position.Print();

	return 0;
}