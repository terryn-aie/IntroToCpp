#include <iostream>

struct HighScoreData
{
	int HighScore = 0;
	float TimeToComplete = 0.0f;
};

int GetHighestScoreData(HighScoreData Entries[], int Size)
{
	// probably no entry
	if (Size == 0) { return -1; }

	int HighestScoreSoFar = Entries[0].HighScore;
	int HighestScoreIndex = 0;

	for (int i = 1; i < Size; ++i)
	{
		if (Entries[i].HighScore > HighestScoreSoFar)
		{
			HighestScoreSoFar = Entries[i].HighScore;
			HighestScoreIndex = i;
		}
	}

	return HighestScoreIndex;
}

float GetAverageCompletionTime(HighScoreData Entries[], int Size)
{
	// probably no entry
	if (Size == 0) { return -1.0f; }

	float Sum = 0.0f;

	for (int i = 0; i < Size; ++i)
	{
		Sum += Entries[i].TimeToComplete;
	}

	return Sum / Size;
}

int main()
{
	HighScoreData GalagaScores[] = {
		{44, 255.5f},
		{10, 200.1f},
		{67, 270.3f},
		{32, 283.7f}
	};

	int Index = GetHighestScoreData(GalagaScores, 4);
	float Avg = GetAverageCompletionTime(GalagaScores, 4);

	return 0;
}