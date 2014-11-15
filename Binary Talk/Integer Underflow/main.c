#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(int argc, char* argv[])
{
	unsigned int playerNumber = 0;
	signed int chosenNumber = 0;

	unsigned int cpuNumber = 200;

	printf("Please enter a number less than 100:");

	if(scanf("%d", &chosenNumber))
	{
		if(chosenNumber > 99)
		{
			printf("That's not below 100!  You lose!\n");
		}
		else
		{
			playerNumber += chosenNumber;
			if(chosenNumber > cpuNumber)
			{
				printf("You win!");
				printf("Scores: %x, %x", cpuNumber, playerNumber);
			}
			else
			{
				printf("You Lose!");
			}
		}
	}
	else
	{
		printf("That's not a number silly!");
	}
	return 0;
}