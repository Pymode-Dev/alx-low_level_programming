#include "main.h"

/**
 * _isupper - Checks if a character is uppercase
 * @c: given charater
 * Description: Checks for uppercase charater
 * Return: 1 for uppercase, 0 otherwise
 */
int _isupper(int c)
{
	int x;

	if (c >= 'A' && c <= 'Z')
	{
		x = 1;
	}
	else
	{
		x = 0;
	}

	return (x);
}
