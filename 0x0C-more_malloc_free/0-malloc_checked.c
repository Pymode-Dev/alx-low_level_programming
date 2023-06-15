#include <stdio.h>
#include <stdlib.h>


/**
 * malloc_checked - allocate and check if malloc works successfully
 * @b: the size to allocate
 * Return: void
 */


void *malloc_checked(unsigned int b)
{
	void *new = malloc(b);

	if (new == NULL)
		exit(98);
	return (new);
}
