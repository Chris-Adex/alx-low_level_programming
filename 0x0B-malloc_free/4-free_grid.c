#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created by alloc_grid
 * @grid: the 2D array of integers to be freed
 * @height: height of the grid
 *
 * Return; Nothing
 */

void free_grid(int **grid, int height)
{
if (grid == NULL || height <= 0)
{
}

for (int i = 0; i < height; i++)
{
	free(grid[i]);
}
free(grid);
}
