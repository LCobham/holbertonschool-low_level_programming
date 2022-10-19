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
	int i, k;
	int *p = NULL;
	int **q = NULL;

	if (height <= 0 || width <= 0)
		return (NULL);

	k = height * width;
	p = malloc(k * sizeof(int));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < k; i++)
		p[i] = 0;

	q = malloc(sizeof(&p));
	if (q == NULL)
		return (NULL);
	**q = *p;
	return (q);
}
