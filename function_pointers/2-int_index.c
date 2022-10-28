#include "function_pointers.h"

/**
 * int_index - search for an int in an array
 * @array: array
 * @size: n of elements in array
 * @cmp: function pointer. cmp compared values
 *
 * Return: index of first element for which cmp(i) != 0, or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	while ((*cmp)(array[i]) == 0)
	{
		if (i >= size)
			return (-1);
		i++;
	}
	return (i);
}
