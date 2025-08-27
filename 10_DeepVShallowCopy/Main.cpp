class Bucket
{
	int* Numbers = nullptr;
	int ActualSize = 0;

public:
	// Default Constructor
	Bucket() { }
	// Copy Constructor
	Bucket(const Bucket& Other)
	{
		Numbers = new int[Other.ActualSize];
		ActualSize = Other.ActualSize;
		for (int i = 0; i < ActualSize; ++i)
		{
			Numbers[i] = Other.Numbers[i];
		}
	}

	// Copy Assignment Operator

	// SetSize
	int SetSize(int NewSize)
	{
		Numbers = new int [NewSize];
		ActualSize = NewSize;
		return NewSize;
	}

	int& GetAt(int Index)
	{
		// TODO: bounds checking; crash if invalid
		return Numbers[Index];
	}

	// Destructor
	~Bucket()
	{
		delete[] Numbers;
		Numbers = nullptr;
	}

	Bucket& operator= (const Bucket& Other)
	{
		if (ActualSize >= Other.ActualSize)
		{
			// we're already well sized enough
		}
		else
		{
			// delete existing data
			delete[] Numbers;
			Numbers = nullptr;

			// copy as we did before
			Numbers = new int[Other.ActualSize];
		}

		ActualSize = Other.ActualSize;
		for (int i = 0; i < ActualSize; ++i)
		{
			Numbers[i] = Other.Numbers[i];
		}

		return *this;
	}
};

void PopulateBucket(Bucket Target, int Count)
{
	for (int i = 0; i < Count; ++i)
	{
		Target.GetAt(i) = 0;
	}
}

int main()
{
	Bucket EthanBucket;
	EthanBucket.SetSize(10);

	Bucket HunterBucket (EthanBucket); // invokes the copy constructor
	Bucket KelseyBucket = EthanBucket; // invokes the copy constructor too

	Bucket TerryBucket;
	// I may or may not have done things too
	TerryBucket = EthanBucket;			// invokes the copy assignment operator

	HunterBucket.GetAt(0) = 5;

	//PopulateBucket(EthanBucket, 10);

	return 0;
}