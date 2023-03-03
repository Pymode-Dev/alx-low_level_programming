#include "main.h"

/**
 * reverse_array - revs array
 * @a: array of integers
 * @n: number of elements in array a
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0, x;

	while (i < n)
	{
		n--;
		x = a[i];

		a[i] = a[n];
		a[n] = x;
		i++;
	}
}
