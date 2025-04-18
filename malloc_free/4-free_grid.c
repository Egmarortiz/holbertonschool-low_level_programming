#include <stdlib.h>

/**
 * free_grid - frees a 2D grid previously created by alloc_grid.
 * @grid: 2D grid of integers.
 * @height: height of the grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

