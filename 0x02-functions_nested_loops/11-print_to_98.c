#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print from nth to 98
 * @n: int
 *
 * Return: Always 0.
 */

void print_to_age(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		printf("%d, ", i);
	}
}
