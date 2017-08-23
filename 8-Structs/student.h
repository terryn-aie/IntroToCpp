#pragma once

struct student
{
	int studentID;
	int courseID;
	int lastExamScore;
};

void printStudent(student s);

float avgTestScore(student section[], int size);
float medTestScore(student section[], int size);
int enrollmentCount(student section[], int size, int courseID);