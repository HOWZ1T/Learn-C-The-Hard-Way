#include <stdio.h>
#include "exercises.h"

// WARNING len has ton of edge cases, use on controlled data only !
#define len(x) (sizeof(x) / sizeof((x)[0]))
typedef enum { false, true } bool; // bool enum to allow user-friendly boolean operations in c

// defines an exercise by number and a pointer to it's function
typedef struct Exercise {
	int num;
	int (*ptrFnEx)(int, char* []); // pointer (ptr) to a function (fn) for the exercise (ex)
} Exercise;

// array of exercise structs for querying and executing the code for the relevant exercise
const static Exercise exercises[] = {
	{1, &ex1},
	{3, &ex3},
	{7, &ex7},
	{12, &ex12},
};

// returns the index for the exercise if the given int (ex) is the number corresponding to the exercise from the array exercises.
// else it returns -1 indicating that no exercise by the int (ex) exists.
int isValidExercise(int ex)
{
	for (int i = 0; i < len(exercises); i++)
	{
		if (exercises[i].num == ex)
		{
			return i;
		}
	}

	return -1;
}

int main(int argc, char* argv[])
{
	int i, res = -1;

	// getting the index of the exercise to run
	// also performs input validation
	while (res == -1)
	{
		printf("enter the number of the exercise to run: ");
		scanf_s("%d", &i);
		res = isValidExercise(i);
		if (res > -1)
		{
			break;
		}

		printf("invalid exercise!\n\n");
	}

	int exResult = -100; // execution (ex) result of the executed exercise function
	exResult = (*exercises[res].ptrFnEx)(argc, argv);


	printf("finished executing exercise with exit code: %d", exResult);
	return 0;
}
