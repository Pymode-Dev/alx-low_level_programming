#include <stdio.h>
#include <stdlib.h>


/**
 * main - calculates the change for a coin
 * @argc: the number of args
 * @argv: the array of args
 * Return: 1 or 0
 */


int main(int argc, char *argv[])
{
	int cents, change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		change++;

		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}
	printf("%d\n", change);

	return (0);
}
