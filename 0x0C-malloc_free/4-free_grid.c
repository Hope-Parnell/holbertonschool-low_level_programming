#include <stdlib.h>

/**
 * free_grid - frees malloc from 2D array
 * @grid: double pointer to 2d array
 * @height: number of rows in array
 *
 * Return:
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
