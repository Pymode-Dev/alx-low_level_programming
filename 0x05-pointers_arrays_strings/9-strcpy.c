#include "main.h"

/**
 * _strcpy - copy one string to another
 * @dest: destination of the copied string
 * @src: source of the copied string
 * Return: 0.
 */

char *_strcpy(char *dest, char *src)
{
	int i, j = 0;

	while (src[j] != '0')
	{
		j++;
	}

	i = 0;

	while (i < j && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	i = i;

	while (i <= j)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

