#pragma once

struct Entity
{
	float hitPoints;
	float atkPoints;
	float defPoints;
};

void battle(Entity combatantA, Entity combatantB);