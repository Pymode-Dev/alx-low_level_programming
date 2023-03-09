#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: square matrix
 * @size: size of diagonals
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	i = 0;

	while (i < size)
	{
		sum1 += *(a + (size * i) + i);
		sum2 += *(a + (size * i + size - 1 - i));
		i++;
	}
		printf("%d, %d\n", sum1, sum2);
}
