#include <stdio.h>

/**
 * main - prints all argument passed into it in newline
 * @argc: the number of args
 * @argv: the array of args
 * Return: 0
 */


int main(__attribute__((unused)) int argc, char *argv[])
{
	int i = 0;

	for (i; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}