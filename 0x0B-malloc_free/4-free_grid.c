#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free a 2 dimensional grid
 * @grid: pointer to the grid
 * @height: height of the grid
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
