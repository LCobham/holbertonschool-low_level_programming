#include "main.h"

/**
 * swap_int - swaps the values of two ints
 * @a: int number 1
 * @b: int number 2
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
