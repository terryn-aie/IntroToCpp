#include <iostream>

#include <string>
#include <cstring>

struct Vector2
{
	float X, Y;
};

class Enemy
{
public:
	// default constructor
	Enemy()
	{
		Position = {}; // default to zeros
	}

	// parameterized constructor
	Enemy(const Vector2& InitialPosition)
	{
		Position = InitialPosition;
	}

	void DoEnemyThings() {}

	virtual void Move()
	{
		std::cout << "Enemy Move Things" << std::endl;
	}

protected:
	Vector2 Position;
};

class Grunt : public Enemy
{
public:
	Grunt()
	{
		ID = 0;
	}

	Grunt(const Vector2& InitialPosition, int InitialID) : Enemy(InitialPosition)
	{
		ID = InitialID;
	}

	virtual void Move() override
	{
		Enemy::Move();

		std::cout << "Grunt is moving! oomph!!" << std::endl;
	}

private:
	int ID;
};

class Heavy : public Enemy
{
public:
	virtual void Move() override
	{
		Enemy::Move();

		std::cout << "Heavy is ROLLING in a VEHICLE!!" << std::endl;
	}
};

int main()
{
	Enemy* CurrentEnemy = nullptr;
	
	Heavy AutoHeavy;

	CurrentEnemy = &AutoHeavy;
	CurrentEnemy->Move();

	char Name[50] = "John";
	char AnotherName[50] = "John";

	// -1	first string comes BEFORE the second
	//  0	strings are lexicographically in the same order
	// +1	first string comes AFTER the second
	int Sort = strcmp(Name, AnotherName);

	std::string STDName = "John";

	int SortAgain = strcmp(STDName.c_str(), AnotherName);

	bool STDIsSame = STDName == AnotherName;

	// Enemy ValueEnemy;
	// 
	// ValueEnemy = Grunt();
	// ValueEnemy.Move();
}