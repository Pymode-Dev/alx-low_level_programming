#include "main.h"

/**
 * _isupper - print if a character is uppercase or not
 * @c: alphabet
 * Return: 0.
 */

int _isupper(char c)
{
	int x;
	
	if (c >= 'A' && c <= 'Z')
	{
		x = 1;
	} else
	{
		x = 0;
	}

	return (x);
}
