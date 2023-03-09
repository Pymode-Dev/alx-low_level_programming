#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to find
 * @accept: string to search
 * Return: int
 *
 */

unsigned int _strspn(char * s, char * accept)
{
	int i = 0;
	int j = 0;
	int length;

	while (s[i] != '\0' && accept[j] != 0)
	{
		if s[i] == accept[j]
		{
			length += 1
		}
		i++;
		j++;
	}
	return (length);
}

