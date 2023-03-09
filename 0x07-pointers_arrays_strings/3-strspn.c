#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to find
 * @accept: string to search
 * Return: int
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				x++;
				break;
			}
			else if ((accept[i + 1]) =='\0')
			{
				return (x);
			}
		}
		s++;
	}
	return (x);
}
