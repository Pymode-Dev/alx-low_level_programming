#include "main.h"

/**
 * _strcmp - compares strings
 * @s1: string 1
 * @s2: string 2
 * Return: -15, 0, or 15
 */

int _strcmp(char *s1, char *s2)
{
	int x = 0;

	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	if (*s1 != *s2)
	{
		x = *s1 - *s2;
	}

	return (x);
}
