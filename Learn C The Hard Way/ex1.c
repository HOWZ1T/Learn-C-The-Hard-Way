#include <stdio.h>
#include "exercises.h"

// single line comment

/*
	Multi-line
	comment
*/
int ex1(int argc, char* argv[])
{
	int distance = 100;

	// break 1: by ommiting the distance variable from printf it instead prints data from callstack 
	// printf("You are %d kilometers away.\n);"
	printf("You are %d kilometers away.\n", distance);
	return 0;
}
