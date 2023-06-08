#include <stdio.h>

/**
 * _sqrt_recursion - calculates the square root of x recursively
 * @x: the number to calculate
 * Return: int
 */

int _sqrt_recursion(int x)
{
	return (_sqr(x, 1));
}

int _sqr(int x, int root)
{
	if (x < 0)
		return (-1);
	else if (root * root == x)
		return (root);
	else if (root * root < x)
		return (_sqr(x, root + 1));
}
