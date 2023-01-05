#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - implement binary search in a sorted array
 * @array: array
 * @size: array size
 * @value: value searched for
 *
 * Return: index of value, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, j, L = 0, R = size - 1;

	if (!array)
		return (-1);

	for (i = R / 2; R >= L; i = (R + L) / 2)
	{
		printf("Searching in array: ");
		for (j = L; j <= R; j++)
			(j != R) ? printf("%d, ", array[j]) : printf("%d\n", array[j]);

		if (array[i] == value)
			return (i);
		else if (value > array[i])
			L = i + 1;
		else
			R = i - 1;
	}
	return (-1);
}
