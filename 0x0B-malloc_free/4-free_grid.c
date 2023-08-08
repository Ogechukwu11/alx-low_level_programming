#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free the grid
 * @grid: grid of the previous 2D array
 * @height: int
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
