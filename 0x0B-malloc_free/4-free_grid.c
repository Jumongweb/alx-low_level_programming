#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - a function that frees a 2 dimensional grid
 * previously created
 * @grid: input value
 * @height: input value
 * Description: free memory
 * Return: 0 always
 *
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
