#include "search_algos.h"
#include <stdio.h>

/**
 * exponential_search - perform exponential search in an array
 * @array: array
 * @size: array size
 * @value: value being searched for
 *
 * Return: index at which value is found or -1 otherwise
 */
int exponential_search(int *array, size_t size, int value)
{
	unsigned int bound = 1;

	if (!array || size < 1)
		return (-1);

	if (size == 1)
	{
		printf("Value checked array[%u] = [%d]\n", 0, array[0]);
		if (value == array[0])
			return (0);
		return (-1);
	}
	while (value > array[bound] && bound < size)
	{
		printf("Value checked array[%u] = [%d]\n", bound, array[bound]);
		bound *= 2;
		if (bound >= size)
			break;
	}
	if (bound > size)
		return (-1);

	if (bound == size)
	{
		printf("Value found between indexes [%u] and [%u]\n", bound / 2, bound - 1);
		return (BinarySearch(array, bound / 2, bound - 1, value));
	}
	printf("Value found between indexed [%u] and [%u]\n", bound / 2, bound);
	return (BinarySearch(array, bound / 2, bound, value));
}

/**
 * BinarySearch - search for a value in an array. Search from index lo to hi
 * @array: array
 * @lo: star index
 * @hi: end index
 * @value: value being searched for
 *
 * Return: index at which value was found or -1 otherwise
 */
int BinarySearch(int *array, unsigned int lo, unsigned int hi, int value)
{
	unsigned int L = lo, R = hi, i, j;

	/* for (i = (L + R) / 2; R > L ; i = (L + R) / 2)*/
	for (i = (R + L) / 2; R >= L; i = (R + L) / 2)
	{
		printf("Searching in array: ");
		for (j = L; j <= R; j++)
			(j != R) ? printf("%d, ", array[j]) : printf("%d\n", array[j]);

		if (value == array[i])
			return (i);
		if (value > array[i])
			L = i + 1;
		else
			R = i - 1;
	}
	return (-1);
}
