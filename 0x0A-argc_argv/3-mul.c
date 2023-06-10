#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints multiplication of two numbers
 * @argc: the number of args
 * @argv: the aray of args
 * Return: 0
 */


int main(int argc, char *argv[])
{
	int x;

	if (argc != 3)
	{
		printf("Error\n");
		x = 1;
	}
	else
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);
		printf("%d\n", a * b);
		x = 0;
	}

	return (x);
}
