#include "function_pointers.h"

/**
 * array_iterator - execute a function on each element in an array
 * @array: pointer to array of ints
 * @size: n of elements
 * @action: pointer to function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (action == NULL)
		return;

	for (i = 0; i < (int) size; i++)
		(*action)(array[i]);
}
