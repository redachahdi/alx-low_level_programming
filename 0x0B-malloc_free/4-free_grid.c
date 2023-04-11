#include "main.h"
#include <stdlib.h>
/**
 * free_grid - get free the two dimensionals grid.
 *
 * @grid: is the integers's multidimensional array.
 * @height: is the grid's height  .
 *
 * Return: it has no return
 */
void free_grid(int **grid, int height)
{
	int a;

	if (grid == NULL || height <= 0)
		return;
	for (a = 0; a < height; a++)
	{
		free(grid[a]);
		grid[a] = NULL;
	}
	free(grid);
	grid = NULL;
}
