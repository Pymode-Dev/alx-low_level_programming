#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: Destination string
 * @src: Source string
 * Return: String
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
