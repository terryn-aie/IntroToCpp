#pragma once

struct piggybank
{
	int oneDollarBills;
	int twoDollarBills;
	int fiveDollarBills;

	int quarters;
	int dimes;
	int nickels;
	int pennies;
};

float calcPiggybankNotes(piggybank piggy);
float calcPiggybankCoins(piggybank piggy);
float calcPiggybankTotal(piggybank piggy);