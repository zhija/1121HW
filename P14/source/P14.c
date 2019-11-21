#include <stdio.h>
#include <stdlib.h>
#define STUDENTS 3
#define EXAMS 4
int minimum(const int grades[][EXAMS], int pupils, int tests);
int maximum(const int grades[][EXAMS], int pupils, int tests);
double average(const int setofGrade[], int tests);
void printArray(const int grades[][EXAMS], int pupils, int tests);
int main(void)
{
	int students;
	const int studentGrades[STUDENTS][EXAMS] = { {77,68,86,73},{96,87,89,78},{70,90,86,81} };
	printf("The array is:\n");
	printArray(studentGrades, STUDENTS, EXAMS);
	printf("\n\nLowest grade: %d\nHighest grade: %d\n", minimum(studentGrades, STUDENTS, EXAMS),
		maximum(studentGrades, STUDENTS, EXAMS));

	for (students = 0; students < STUDENTS; students++)
	{
		printf("The average grade for student %d is %.2f\n", students, average(studentGrades[students], EXAMS));
	}
	system("pause");
	return 0;
}
void printArray(const int grades[][EXAMS], int pupils, int tests)
{
	int i, j;
	printf("                [0]  [1]  [2]  [3]");
	for (i = 0; i < pupils; i++)
	{
		printf("\nstudentGrade[%d] ", i);
		for (j = 0; j < tests; j++)
		{
			printf("%-5d", grades[i][j]);
		}

	}
}
int minimum(const int grades[][EXAMS], int pupils, int tests)
{
	int i, j, lowgrade = 100;
	for (i = 0; i < pupils; i++)
	{
		for (j = 0; j < tests; j++)
		{
			if (grades[i][j] < lowgrade)
			{
				lowgrade = grades[i][j];
			}
		}
	}
	return lowgrade;
}
int maximum(const int grades[][EXAMS], int pupils, int tests)
{
	int i, j, highgrade = 0;
	for (i = 0; i < pupils; i++)
	{
		for (j = 0; j < tests; j++)
		{
			if (grades[i][j] > highgrade)
			{
				highgrade = grades[i][j];
			}
		}
	}
	return highgrade;
}
double average(const int setofGrade[], int tests)
{
	int i, total = 0;
	for (i = 0; i < tests; tests++)
	{
		total += setofGrade[i];
	}
	return (double)total / tests;
}
