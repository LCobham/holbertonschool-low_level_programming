#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print diagonal sums
 * @a: pointer to 2D array
 * @size: row n of square matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, d1, d2;

	for (i = 0, d1 = 0, d2 = 0; i < size; i++)
	{
		d1 += a[i * (size + 1)];
		d2 += a[(size - 1) * (i + 1)];

	}
	printf("%d, %d\n", d1, d2);
}
