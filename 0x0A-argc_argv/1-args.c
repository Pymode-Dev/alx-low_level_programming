#include <stdio.h>

/**
 * main - program to print the number of arguments.
 * @argc: the number of argument
 * @argv: the array of arguments.
 * Return: 0
 */


int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
