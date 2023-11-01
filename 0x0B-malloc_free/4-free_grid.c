#include "main.h"

/**
 * free_grid - free memory previously
 * @grid: pointer to ten array
 * @height: number of rows
 */

void free_grid(int **grid, int height)
{
	int p;

	for (p = 0; p < height; p++)
		free(grid[p]);
	free(grid);
}
