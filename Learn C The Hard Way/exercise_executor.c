#include <stdio.h>
#include "exercises.h"

#define len(x) (sizeof(x) / sizeof((x)[0]))
typedef enum { false, true } bool;

const static int exercises[] = {1, 3, 7};

bool isValidExercise(int ex)
{
	int len = len(exercises);
	for (int i = 0; i < len; i++)
	{
		if (exercises[i] == ex)
		{
			return true;
		}
	}

	return false;
}

int main(int argc, char* argv[])
{
	int i;
	bool validInput = false;

	while (!validInput)
	{
		printf("enter the number of the exercise to run: ");
		scanf_s("%d", &i);
		
		if (isValidExercise(i))
		{
			break;
		}

		printf("invalid exercise!\n\n");
	}

	int result = -100;

	switch (i)
	{
		case 1:
			printf("executing exercise 1...\n");
			result = ex1(argc, argv);
			break;

		case 3:
			printf("executing exercise 3...\n");
			result = ex3(argc, argv);
			break;

		case 7:
			printf("executing exercise 7...\n");
			result = ex7(argc, argv);
			break;

		default:
			printf("attempted to execute invalid exercise!\n");
			return -1;
	}

	printf("finished executing exercise with exit code: %d", result);
	return 0;
}
