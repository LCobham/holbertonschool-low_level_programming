#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements in array of ints
 * @a: pointer to start of array of ints
 * @n: number of ints to print
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
