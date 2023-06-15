#include <stdio.h>
#include <stdlib.h>


/**
 * free_grid - Free the grid from memory block
 * @grid: the grid to free
 * @height: The height of the grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
