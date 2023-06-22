#include <stdio.h>
#include "function_pointers.h"


/**
 * array_iterator - iterates an array and perfomr some action
 * @array: the array to iterate
 * @size: the size of the array
 * @action: the function pointer
 *
 * Return: void
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;
	int j = size;

	if (action != NULL)
	{
		for (; i < j; i++)
		{
			action(array[i]);
		}
	}
}
