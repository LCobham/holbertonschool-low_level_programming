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
	int gap = sqrt(size), i, j;

	if (!array)
		return (-1);

	for (i = 0; i < (int) size; i += gap)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		if (array[i] < value)
			continue;
		else
		{
			printf("Value found between indexes [%d] and [%d]\n", i - gap, i);
			for (j = i - gap; j >= 0 && j < i; j++)
			{
				printf("Value checked array[%d] = [%d]\n", j, array[j]);
				if (array[j] == value)
					return (j);
			}
			return (-1);
		}
	}
	return (-1);
}
