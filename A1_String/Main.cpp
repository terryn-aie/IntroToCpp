#include <iostream>
#include <cassert>

#include "String.h"

int main()
{
	String DefaultString;

	String FromCString("Terry Nguyen");
	std::cout << FromCString << std::endl;
	size_t Len1 = FromCString.Length();
	bool Len1Pass = Len1 == 12;
	std::cout << (Len1Pass ? "PASS" : "FAIL") << " - Length Test 1" << std::endl;

	String FromCString2("John Madden");
	size_t Len2 = FromCString2.Length();
	String FromCString3("Elizabeth Taylor");
	size_t Len3 = FromCString3.Length();

	char GetThatCharacter = FromCString.CharacterAt(0);
	FromCString.CharacterAt(0) = 'J';

	return 0;
}