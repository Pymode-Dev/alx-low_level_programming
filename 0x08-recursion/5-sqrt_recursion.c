#include <stdio.h>

/**
 * _sqrt_recursion - calculates the square root of x recursively
 * @x: the number to calculate
 * Return: int
 */

int _sqrt_recursion(int x)
{
	return (_sqrt(x, 1));
}

int _sqrt(int x, int root)
{
	if (x < 0)
		return (-1);
	else if (root * root == x)
		return (root);
	else
		return (_sqrt(x, root + 1));
}
