#include "main.h"

/**
 * _strcpy - I'm trying hard to understand
 * @dest: Copy destination
 * @src: source of string to be copied
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, n = 0;

	while (src[n] != '\0')
	{
		n++;
	}

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	i = i;
	while (i <= n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
