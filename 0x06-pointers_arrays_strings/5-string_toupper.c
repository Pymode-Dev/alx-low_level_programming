#include "main.h"

/**
 * string_toupper - converts a lowercase letter to uppercase
 * @s: character
 * Return: string
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
		i++;
	}

	return (s);
}
