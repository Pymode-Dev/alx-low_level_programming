#include "main.h"

/**
 * _isdigit - return is a number is a digit
 * @c: int
 * Return: 0 or 1.
 */

int _isdigit(int c)
{
	int x;

	if (c >= 0 && c <= 9)
	{
		x = 1;
	} else
	{
		x = 0;
	}

	return (x);
}
