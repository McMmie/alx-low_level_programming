#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees memory previously allocated by alloc_grid function
 * @grid: a 2D array
 * @height: height of grid
 *
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		free(grid);
	}
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

