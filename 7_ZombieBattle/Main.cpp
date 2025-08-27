#include <iostream>

struct Player
{
	float Health = 100.0f;
	int Attack = 3;
	int Defense = 1;

	void Print()
	{
		std::cout << "HP:" << Health << std::endl;
		std::cout << "Attack:" << Attack << std::endl;
		std::cout << "Defense:" << Defense << std::endl;
	}
};

int main()
{
	std::cout << "====================================" << std::endl;
	std::cout << "== Welcome to Final Zombie Island ==" << std::endl;
	std::cout << "====================================" << std::endl;

	Player Terry;
	Player Zombie;

	bool bIsGameRunning = true;
	while (bIsGameRunning)
	{
		// displaying player stats
		std::cout << "... YOU" << std::endl;
		Terry.Print();

		// display enemy stats
		std::cout << "... ZOMBIE" << std::endl;
		Zombie.Print();

		// prompt the user for action
		std::cout << "What do you do?" << std::endl;
		char Command[32];

		std::cin >> Command;

		// process action
		if (strcmp(Command, "attack") == 0)
		{
			int Damage = Terry.Attack - Zombie.Defense;
			Zombie.Health -= Damage;
		}

		// display outcome
	}
}