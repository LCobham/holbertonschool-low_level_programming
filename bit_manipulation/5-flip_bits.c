#include "main.h"

/**
 * flip_bits - count number of flips needed to equal two numbers
 * @n: number 1
 * @m: number 2
 *
 * Return: number of flips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (count_ones(n ^ m));
}


/**
 * count_ones - count number of 1s the binary of a number has
 * @n: number
 *
 * Return: number of 1s
 */

int count_ones(unsigned long int n)
{
	int count = 1;

	while ((n & (n - 1)) > 0)
	{
		n = n & (n - 1);
		count++;
	}
	return (count);
}
