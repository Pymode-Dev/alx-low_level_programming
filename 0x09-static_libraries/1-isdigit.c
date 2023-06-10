#include "main.h"

/**
 * _isdigit - Checks for digit
 * Description: Checks if int is between 0 - 9
 * @c: Param
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	int x;

	if (c >= '0' && c <= '9')
	{
		x = 1;
	}
	else
	{
		x = 0;
	}

	return (x);
}
