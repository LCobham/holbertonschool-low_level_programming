#include "main.h"

/**
 * alloc_grid - create a 2D array
 * @width: width of array in n of columns
 * @height: height of array in n of rows
 *
 * Return: pointer to 2D array
 */

int **alloc_grid(int width, int height)
{
	int i, j, k, **p;

	if (width <= 0 || height <= 0)
		return (NULL);

	k = height * width;
	p = malloc(k * sizeof(int *));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			while (i >= 0)
			{
				free(p[i]);
				i--;
			}
			return (NULL);
		}
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}
	return (p);
}
