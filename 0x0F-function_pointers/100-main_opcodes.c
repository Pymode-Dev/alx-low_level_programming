#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - print the operation codes in assembly lang
 * @a: address of the main functio
 * @n: number of bytes
 *
 * Return: void
 */

void print_opcodes(char *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%.2hx", a[i]);

		if (i < (n - 1))
		{
			printf(" ");
		}
		i++;
	}
	printf("\n");
}

/**
 * main - print the opcods
 * @argc: the arg count
 * @argv: the arg array
 * Return: int
 */

int main(int argc, char **argv)
{
	int i;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	i = atoi(argv[1]);

	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}
	array = __FILE__;

	print_opcodes(array, i);

	return (0);
}
