#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - return the first occurrence of a number index
 * @array: The array to search
 * @size: the size of the array
 * @cmp: the function pointer to compare
 *
 * Return: int
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		i = 0;

		for (; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
