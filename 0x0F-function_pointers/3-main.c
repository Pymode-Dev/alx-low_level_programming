#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"


/**
 * main - the calculates menu
 * @argc: argument count
 * @argv: argument value
 * Return: int
 */

int main(int argc, char *argv[])
{
	unsigned int answer;
	int (*operator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operator = get_op_func(argv[2]);

	if ((*(argv[2]) == '/' || (*argv[2] == '%')) && (atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}


	if (!operator)
	{
		printf("Error\n");
		exit(99);
	}

	answer = operator(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", answer);

	return (0);
}
