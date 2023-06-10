#include <stdio.h>
#include <stdlib.h>


/**
 * main - addition of two numbers
 * @argc: number of args
 * @argv: array of args
 * Return: 0
 */


int main(int argc, char *argv[])
{
	int a = 0;
	int i, j;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		a += atoi(argv[i]);
	}
	printf("%d\n", a);

	return (0);
}
