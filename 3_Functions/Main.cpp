int Min(int Numbers[], size_t Size);

int main()
{
	int MinTestA[] = { 0, 55, 32, -17, 9 };
	int MinTestSmallestA = Min(MinTestA, 5);
	int MinTestB[] = { 5623, 345, -123, 333, 2312, -123123, -55 };
	int MinTestSmallestB = Min(MinTestB, 7);

	return 0;
}

int Min(int Numbers[], size_t Size)
{
	int Smallest = Numbers[0];

	for (int i = 1; i < Size; ++i)
	{
		if (Numbers[i] < Smallest)
		{
			Smallest = Numbers[i];
		}
	}

	return Smallest;
}