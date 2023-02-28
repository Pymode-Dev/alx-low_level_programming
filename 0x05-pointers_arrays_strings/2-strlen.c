#include "main.h"

/**
 *  _strlen - return the length of a string.
 *  @s: a string to find its length
 *  Return: 0.
 */

int _strlen(char *s)
{
	int i = 0, length = 0;

	while (s[i] != '\0')
	{
		length++;
		i++;
	}

	return (length);
}
