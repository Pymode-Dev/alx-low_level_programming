#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: the pointer to previous memory
 * @old_size: the old size
 * @new_size: the new size
 * Return: NULL or ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new = malloc(new_size);
		if (new == NULL)
			return (NULL);
	}
	if (new_size == 0 && ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	if ((new_size > old_size) && (ptr != NULL))
	{
		new = malloc(new_size);

		if (new == NULL)
			return (NULL);
		
		i = 0;
		for (; i < old_size; i++)
		{
			new[i] = *((char *) ptr + i);
			i++;
		}
		free(ptr);
	}
	return (new);
}

