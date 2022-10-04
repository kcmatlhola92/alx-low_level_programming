#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: 2 dimensional of free array
 * @height: input height of grid
 * Return: no return
 */

void free_grid(int **grid, int height)
{
	int index;

	if (grid != NULL || height != 0)
	{
		for (index = 0; index < height; index++)
			free(grid[index]);
		free(grid);
	}
}
