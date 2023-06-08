#include <stdio.h>


/**
 * _sqr - find the square of x
 * @x: the number
 * @root: the root
 * Return: _sqr root or -1
 */

int _sqr(int x, int root);

int _sqr(int x, int root)
{
	if (x < 0)
		return (-1);
	else if (root * root == x)
		return (root);
	else if (root * root < x)
		return (_sqr(x, root + 1));
	return (0);
}


/**
 * _sqrt_recursion - find the square root of x recursively
 * @x: the number
 * Return: int
 */

int _sqrt_recursion(int x)
{
	return (_sqr(x, 1));
}
