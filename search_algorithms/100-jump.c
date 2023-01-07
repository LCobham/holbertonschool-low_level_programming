#include "search_algos.h"
#include <math.h>
#include <stdio.h>

/**
 * jump_search - implement jump seazrch on a sorted array
 * @array: array
 * @size: array size
 * @value: value being searched for
 *
 * Return: index where value was found or -1 if no value
 */
int jump_search(int *array, size_t size, int value)
{
	int gap = sqrt(size), i, j, k;

	if (!array)
		return (-1);

	for (i = 0, j = gap; i < (int) size; i += gap, j += gap)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] > value)
			return (-1);
		if (j >= (int) size || array[j] >= value)
		{
			printf("Value found between indexes [%d] and [%d]\n", i, j);
			for (k = i; k < (int) size && k <= j; k++)
			{
				printf("Value checked array[%d] = [%d]\n", k, array[k]);
				if (array[k] == value)
					return (k);
			}
			return (-1);
		}
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
