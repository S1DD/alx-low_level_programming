#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Displays a grid
 * @width: ...
 * @height: ...
 *
 * Return:...
 */
int **alloc_grid(int width, int height)
{
	int a, b, c, d;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		grid[a] = malloc(sizeof(int) * width);

		if (grid[a] == NULL)
		{
			for (b = a; b >= 0; b--)
			{
				free(grid[b]);
			}

			free(grid);
			return (NULL);
		}
	}

	for (c = 0; c < height; c++)
	{
		for (d = 0; d < width; d++)
		{
			grid[c][d] = 0;
		}
	}

	return (grid);
}
