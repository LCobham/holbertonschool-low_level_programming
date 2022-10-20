#include "main.h"

/**
 * array_range - create an array of ints
 * @min: minimum number in the array
 * @max: maximum number in the array
 *
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int i, j;
	int *p;

	if (min > max)
		return (NULL);

	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = min, j = 0; i <= max; i++, j++)
		p[j] = i;

	return (p);
}
