#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - implement linear search on an array
 * @array: array
 * @size: size of array
 * @value: value searched for
 *
 * Return: value of first index in which value is found or -1
 * if not found or array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
