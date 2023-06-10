#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: String
 * @accept: Comparison string
 * Return: Pointer to byte where a match is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
