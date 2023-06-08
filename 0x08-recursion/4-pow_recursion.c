#include <stdio.h>


/**
 * _pow_recursion - calculates the power of x recursively
 * @x: the number to calculates its power
 * @y: the power of x
 * Return: -1, int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
