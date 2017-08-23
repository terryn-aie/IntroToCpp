#include "student.h"

#include <iostream>

void printStudent(student s)
{
	std::cout << "studentID: " << s.studentID << std::endl;
	std::cout << "  courseID:  " << s.courseID << std::endl;
	std::cout << "  lastScore: " << s.lastExamScore << std::endl;
}

float avgTestScore(student section[], int size)
{
	float total = 0.0f;

	for (int i = 0; i < size; ++i)
	{
		total += section[i].lastExamScore;
	}

	return total / size;
}

float medTestScore(student section[], int size)
{
	// sorting
	while (true)
	{
		bool isSorted = true;

		for (int i = 0; i < size - 1; ++i)
		{
			// is the adjacent value smallest than my current value?
			if (section[i].lastExamScore < section[i + 1].lastExamScore)
			{
				// if so, let's swap'em!
				student temp = section[i];			// holds the original left val

				section[i] = section[i + 1];		// put the right into the left
				section[i + 1] = temp;			// put the orig left into the right

				isSorted = false;
			}
		}

		if (isSorted)
		{
			break;
		}
	}

	// getting the median
	if (size % 2 == 0)
	{
		int midIdx = size / 2;

		float lhs = section[midIdx - 1].lastExamScore;
		float rhs = section[midIdx].lastExamScore;

		return (lhs + rhs) / 2.0f;
	}
	else
	{
		return section[size / 2].lastExamScore;
	}
}

int enrollmentCount(student section[], int size, int courseID)
{
	int tally = 0;

	for (int i = 0; i < size; ++i)
	{
		if (section[i].courseID == courseID)
		{
			tally++;
		}
	}

	return tally;
}