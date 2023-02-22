#include "main.h"

/**
 * _abs - print positive of any number
 * @n: int
 * Return: Always 0.
 *
 */

int _abs(int n)
{
	int x;

	if (n < 0)
	{
		x = n + (-2 * n);
	} else
	{
		x = n;
	}
	return (x);
}
