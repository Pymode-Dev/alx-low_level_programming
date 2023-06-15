#include <stdio.h>
#include <stdlib.h>


/**
 * array_range - allocate array of int with range
 * @min: the lower bound
 * @max: the upper bound
 * Return: int or NULL
 */

int *array_range(int min, int max)
{
	int *arr;
	int i = min, j = 0;
	int l = (max - min) + 1;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(*arr) * l);

	if (arr == NULL)
		return (NULL);

	for (; i <= max; i++)
	{
		arr[j] = i;
		j++;
	}
	return (arr);
}
