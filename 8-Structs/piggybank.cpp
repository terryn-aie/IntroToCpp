#include "piggybank.h"

float calcPiggybankNotes(piggybank piggy)
{
	return piggy.oneDollarBills +
		   piggy.twoDollarBills * 2.0f +
		   piggy.fiveDollarBills * 5.0f;
}

float calcPiggybankCoins(piggybank piggy)
{
	return piggy.pennies * 0.01f +
		piggy.nickels * 0.05f +
		piggy.dimes * 0.1f +
		piggy.quarters * 0.25f;
}

float calcPiggybankTotal(piggybank piggy)
{
	return calcPiggybankCoins(piggy) + calcPiggybankNotes(piggy);
}