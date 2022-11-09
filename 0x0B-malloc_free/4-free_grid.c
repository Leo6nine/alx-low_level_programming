#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a func that frees a 2 dimensional grid.
 * @grid: multidimensional array of integers.
 * @height: height of the grid.
 *
 * Return: no return
 */
void free_grid(int **grid, int height)
{
	int dex;

	for (dex = 0; dex < height; dex++)
		free(grid[dex]);
		free(grid);
}
