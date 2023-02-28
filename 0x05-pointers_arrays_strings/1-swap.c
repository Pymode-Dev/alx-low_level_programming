#include "main.h"

/**
 *  swap_int - swap value of a and b
 *  @a: int
 *  @b: int
 *  Return: 0.
 */

void swap_int(int *a, int *b)
{
	int x, y;

	x = *a;
	y = *b;

	*a = y;
	*b = x;
}
