#include "variadic_functions.h"

/**
 * sum_them_all - sum a variable number of parameters
 * @n: number of ints passed to be summed
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int i, sum;
	va_list arg_p;

	if (n == 0)
		return (0);

	va_start(arg_p, n);

	for (i = 0, sum = 0; i < (int) n; i++)
		sum += va_arg(arg_p, int);
	return (sum);
}
