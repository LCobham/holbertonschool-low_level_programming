#include "main.h"

/**
 * factorial - calculates factorial of a given int
 * @n: int
 *
 * Return: factorial of n. If n < 0, return -1
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
