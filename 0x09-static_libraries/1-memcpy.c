#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: Destination
 * @src: source
 * @n: Size to be copied
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
