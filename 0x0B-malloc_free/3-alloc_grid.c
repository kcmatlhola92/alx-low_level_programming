#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the input
 * @height: height of the input
 * Return: pointer of an array
 */

int **alloc_grid(int width, int height)
{
	int **gridout;
	int index, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	gridout = malloc(height * sizeof(int *));
	if (gridout == NULL)
		return (NULL);

	for (index = 0; index < height; index++)
	{
		gridout[index] = malloc(width * sizeof(int));
		if (gridout[index] == NULL)
		{
			while (index >= 0)
				free(gridout[index--]);
			free(gridout);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			gridout[index][j] = 0;
	}
	return (gridout);
}
