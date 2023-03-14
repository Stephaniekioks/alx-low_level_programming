#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **matrix, x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	matrix = (int **)malloc(sizeof(int *) * height);
	if (matrix == Null)
		return (Null);
	for (x = 0; x < height; ++x)
	{
		matrix[x] = (int *)malloc(sizeof(int) * width);
		if (matrix[x] == NULL)
		{
			for (y = 0; y < x; ++y)
				free(matrix[y]);
			free(matrix);
			return (NULL);
		}
		for (y = 0; y < width; ++y)
		{
			matrix[x][y] = 0;
		}
	}
	return (matrix);
}
