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
	size_t lo = 0, hi = size - 1, pos;
	float tmp;

	if (!array)
		return (-1);

	if (array[lo] == value)
		return (lo);
	while (array[hi] != array[lo] && value >= array[lo] &&
			value <= array[hi])
	{
		tmp = ((value - array[lo]) * (hi - lo));
		tmp /= (array[hi] - array[lo]);
		pos = (size_t) lo + tmp;
		printf("pos = %ld\n", pos);
		if (pos < size)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			if (array[pos] < value)
				lo = pos + 1;
			else if (array[pos] > value)
				hi = pos - 1;
			else
				return (pos);
		}
		else
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}
	}
	if (value > array[hi])
	{
		tmp = ((value - array[lo]) * (hi - lo));
		tmp /= (array[hi] - array[lo]);
		pos = (size_t) lo + tmp;
		printf("Value checked array[%ld] is out of range\n", pos);
	}
	return (-1);
}
