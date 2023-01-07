#include "search_algos.h"
#include <stdio.h>

/**
 * interpolation_search - implement interpolation search on
 * a sorted array
 * @array: array
 * @size: array size
 * @value: value searched for
 *
 * Return: index in which value was found or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t lo = 0, hi = size - 1;
	size_t pos;

	if (!array)
		return (-1);

	if (array[lo] == value)
		return (lo);
	while (array[hi] != array[lo] && value >= array[lo] &&
			value <= array[hi])
	{
		pos = lo + ((double)((hi - lo) / (array[hi] - array[lo])) *
				(value - array[lo]));
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] < value)
			lo = pos + 1;
		else if (array[pos] > value)
			hi = pos - 1;
		else
			return (pos);
	}
	return (-1);
}
