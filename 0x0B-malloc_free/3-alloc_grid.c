#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - the returnpthe pointer to the two arrays of the integers.
 *
 * @width: is width of the array.
 * @height: is height of the array.
 *
 * Return: is the array's pointer of the integers.
 */
int **alloc_grid(int width, int height)
{
	int **of_grid;
	int a, b;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	of_grid = malloc(height * sizeof(int *));
	if (of_grid == NULL)
	{
		free(of_grid);
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		of_grid[a] = malloc(width * sizeof(int));
		if (of_grid[a] == NULL)
		{
			for (a--; a >= 0; a--)
				free(of_grid[a]);
			free(of_grid);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
		for (b = 0; b < width; b++)
			of_grid[a][b] = 0;

	return (of_grid);
}
