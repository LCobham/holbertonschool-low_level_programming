#include "search_algos.h"
#include <stdio.h>
int AdvancedBinary(int *array, int lo, int hi, int value);

/**
 * advanced_binary - performa advanced binary search on an ordered array
 * @array: array
 * @size: array size
 * @value: value being searched for
 *
 * Return: index of the first occurrance of value, or -1 otherwise
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || !size)
		return (-1);
	return (AdvancedBinary(array, 0, size - 1, value));
}

/**
 * AdvancedBinary - performa advanced binary search on an array
 * @array: array
 * @lo: starting index
 * @hi: end index
 * @value: value searched for
 *
 * Return: index at which value was found, or -1 otherwiseç
 */
int AdvancedBinary(int *array, int lo, int hi, int value)
{
	int i;

	if (lo > hi)
		return (-1);

	printf("Searching in array: ");
	for (i = lo; i <= hi; i++)
		(i != hi) ? printf("%d, ", array[i]) : printf("%d\n", array[i]);

	i = (lo + hi) / 2;
	if (array[i] > value)
		return (AdvancedBinary(array, lo, i - 1, value));

	if (array[i] < value)
		return (AdvancedBinary(array, i + 1, hi, value));

/* Value has been found but we have to check its the first occurrance */
/* Apply a binary search in [lo, i] until we find value at an index */
/* in which lo = i */
	if (lo != i)
		return (AdvancedBinary(array, lo, i, value));

	return (i);
}
