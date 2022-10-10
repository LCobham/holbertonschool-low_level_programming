#include "main.h"

/**
 * reverse_array - reverse order of an array of ints
 * @a: pointer to array
 * @n: number of elements
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
