#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers separated by a given string
 * @separator: string used as separator
 * @n: number of ints to be printed
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list ap;

	if (n == 0)
		return;

	va_start(ap, n);
	for (i = 0; i < (int) n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator != NULL)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
