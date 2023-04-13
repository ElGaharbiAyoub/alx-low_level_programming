#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: columns
 * @height: rows
 * Return: a pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **grd, col, row;

	if (width <= 0 || height <= 0)
		return (NULL);
	grd = malloc(height * sizeof(int *));

	if (!grd)
	{
		free(grd);
		return (NULL);
	}

	for (row = 0; row < height; row++)
	{
		grd[row] = malloc(width * sizeof(int));

		if (!grd[row])
		{
			for (col = 0; col < row; col++)
			{
				free(grd[col]);
			}
			free(grd);
			return (NULL);
		}
		for (col = 0; col < width; col++)
			grd[row][col] = 0;
	}
	return (grd);
}
