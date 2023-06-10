#include "main.h"

/**
 * _strlen - Gives length og string
 * @s: Param
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0, x = 0;

	while (s[i] != '\0')
	{
		x++;
		i++;
	}

	return (x);
}
