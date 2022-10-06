#include "main.h"

/**
 * alloc_grid - create 2d array using malloc
 * @width: array width
 * @height: array height
 * Return: the array
 */

int **alloc_grid(int width, int height)
{
	int **grid, x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (y = 0; y < height; y++)
	{
		grid[y] = malloc(sizeof(int) * width);
		if (grid[y] == NULL)
		{
			for (y = 0; y < height; y++)
				free(grid[y]);
			free(grid);
			return (NULL);
		}

		for (x = 0; x < width; x++)
		{
			grid[y][x] = 0;
		}
	}
	return (grid);
}
