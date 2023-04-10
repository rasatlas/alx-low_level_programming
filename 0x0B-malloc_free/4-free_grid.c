#include "main.h"

/**
 * free_grid - a function that frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 *
 * @grid: pointer to a two dimensional array.
 * @height: height of the 2D array.
 */

void free_grid(int **grid, int height)
{
	int i;

	if (height <= 0)
		return;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
