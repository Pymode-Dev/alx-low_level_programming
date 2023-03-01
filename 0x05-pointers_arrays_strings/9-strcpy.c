#include "main.h"

/**
 * _strcpy - copy one string to another
 * @dest: destination of the copied string
 * @src: source of the copied string
 * Return: 0.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0, j = 0;

	while (src[i] != '0')
	{
		i++;
	}

	while (j < i && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}

	j = 1;

	while (j <= i)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}

