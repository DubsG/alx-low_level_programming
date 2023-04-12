#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid
 * @grid: The grid to be freed
 * @height: dimension of the grid (height)
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; h++)
	{
		free(grid[h]);
	}
	free(grid);
}
