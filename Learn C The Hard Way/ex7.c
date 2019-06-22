#include "exercises.h"

int ex7(int argc, char* argv[])
{
	int dist = 100;
	float power = 2.345f;
	double superPower = 56789.4532;

	char initial = 'D';
	char firstName[] = "Dylan";
	char lastName[] = "Randall";

	printf("You are %d kilometers away.\n", dist);
	printf("You have %f levels of power.\n", power);
	printf("You have %f awesome super powers.\n", superPower);
	printf("I have the initial %c.\n", initial);
	printf("I have the first name %s.\n", firstName);
	printf("I have the last name %s.\n", lastName);
	printf("My whole name is %s %c. $s.\n", firstName, initial, lastName);

	int bugs = 100;
	double bugRate = 1.2;
	printf("You have %d bugs at the rate of %f.\n", bugs, bugRate);

	long universeOfDefects = 1L * 1024L * 1024L * 1024L;
	printf("The entire universe has %ld bugs.\n", universeOfDefects);

	double expectedBugs = bugs * bugRate;
	printf("you are expected to have %f bugs.\n", expectedBugs);

	double partOfUniverse = expectedBugs / universeOfDefects;
	printf("That is only a %e portion of the universe.\n", partOfUniverse);

	// this makes no sense, just a demo of something weird
	char nulByte = '\0';
	int carePercentage = bugs * nulByte;
	printf("Which means you should care %d%%.\n", carePercentage);

	return 0;
}