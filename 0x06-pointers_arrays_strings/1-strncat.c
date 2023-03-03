#include "main.h"

/**
 * _strncat - concats two strings
 * @dest: destination string
 * @src: source string
 * @n: num of characters
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b, len = 0;

	while (dest[a] != '\0')
	{
		len++;
		a++;
	}

	b = 0;

	while (src[b] != '\0' && b < n)
	{
		dest[a + b] = src[b];
		b++;
	}

	dest[a + b] = '\0';

	return (dest);
}
