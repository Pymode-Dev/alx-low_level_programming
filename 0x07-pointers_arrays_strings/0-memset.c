#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory poited to by s
 * @s: pointer to memory
 * @b: constant byte
 * @n: space size
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
