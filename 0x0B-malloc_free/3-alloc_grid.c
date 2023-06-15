#include <stdio.h>
#include <stdlib.h>


/**
 * alloc_grid - allocate blocks of memory for 2D array
 * @width: the width of the array
 * @height: the height of the array
 * Return: NULL or int
 */


int **alloc_grid(int width, int height)
{
	int **arr;
	int i = 0;
	int j;

	if (width == 0 || height == 0)
		return (NULL);

	arr = (int **) malloc(height * sizeof(int *));

	if (arr == NULL)
		return (NULL);

	for (; i < height; i++)
	{
		arr[i] = (int *) malloc(width * sizeof(int));

		if (arr[i] == NULL)
		{
			return (NULL);
		}
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
