#include "main.h"

/**
 * get_bit - get the value of a bit at a given index
 * @n: number of which we're going to return the ith bit
 * @index: index at which we want the value of that bit
 *
 * Return: value of bit at index or -1 on failure
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
