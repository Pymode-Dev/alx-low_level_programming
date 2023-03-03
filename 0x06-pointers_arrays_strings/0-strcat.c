#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: destination string
 * @src: source string
 * Return: string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, c;

	while (dest[i] != '\0')
	{
		i++;
	}
	c = 0;

	while (src[c] != '\0')
	{
		dest[i] = src[c];
		i++;
		c++;
	}
	dest[i] = '\0';

	return (dest);
}
