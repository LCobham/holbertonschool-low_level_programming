#include "main.h"
#include <stdio.h>

/**
 * print_binary - print an unsigned long int in binary
 * @n: number to print
 *
 * Return: void
 */

void print_binary(unsigned long int  n)
{
	int i;

	/* First we calculate the most significant bit */
	i = find_most_significant_bit(n);

	/* i = number of digits to print */
	while (i >= 0)
	{
		_putchar((n >> i) + '0');
		if ((n >> i) > 0)
			n -= (1 << i);
		i--;
	}
}

/**
 * find_most_significant_bit - find most significant bit
 * @N: number
 *
 * Return: i, where the most significant bit is 2^i
 */

int find_most_significant_bit(unsigned long int N)
{
	int index, i, ar[] = {1, 2, 4, 8, 16};

	/* Turn all bits to the right of most significant bit to 1 */
	for (i = 0; i < 5; i++)
		N = N | (N >> ar[i]);

	N = (N >> 1) + 1; /* Only most significant bit is now 1 */

	index = 0;
	while (!(N & (1 << index)))
		index++;

	return (index);
}
