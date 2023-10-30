#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free a 2 dimensional grid previously created
 * @grid: grid to free
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
