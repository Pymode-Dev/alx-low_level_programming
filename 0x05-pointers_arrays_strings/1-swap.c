#include "main.h"

/**
 *  swap_int - swap value of a and b
 *  @a: int
 *  @b: int
 *  Return: 0.
 */

void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
}
