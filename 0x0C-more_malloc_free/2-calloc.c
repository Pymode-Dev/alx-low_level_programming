#include <stdio.h>
#include <stdlib.h>


/**
 * _calloc - allocate to memory block
 * @nmemb: memory block
 * @size: size
 * Return: char
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *new;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	new = malloc(nmemb * size);

	if (new == NULL)
		return (NULL);

	i = 0;
	while (i < (nmemb * size))
	{
		*(new + i) = 0;
		i++;
	}
	return (new);
}
