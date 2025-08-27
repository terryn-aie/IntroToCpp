#include "String.h"

#include <cstring>

String::String()
{
	Contents = new char[1];
	Contents[0] = '\0'; // empty string means null term
	ContentsLength = 0;
}

String::String(const char* Str)
{
	// how much memory do I need?
	int IncomingSize = strlen(Str) + 1;
	ContentsLength = IncomingSize - 1;

	// allocate that much
	Contents = new char[IncomingSize];

	// copy the contents of that string into MY contents
	// and update any other related variables
	for (int i = 0; i < IncomingSize; ++i)
	{
		Contents[i] = Str[i];
	}
	
}

String::~String()
{
	delete[] Contents;
	Contents = nullptr;
}

size_t String::Length() const
{
	return ContentsLength;
}

// char  RESULTS IN a copy (two objects; one original, one copy)
// char& RESULTS IN no copy (uses the original object)

char& String::CharacterAt(size_t Index)
{
	return Contents[Index];
}

std::ostream& operator<<(std::ostream& Stream, const String& Str)
{
	Stream << Str.Contents;
	return Stream;
}
