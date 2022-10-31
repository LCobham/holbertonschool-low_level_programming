#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings separated by a given delimiter
 * @separator: separator to be printed in between strings
 * @n: number of strings
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *tmp;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		tmp = va_arg(ap, char *);
		if (tmp != NULL)
			printf("%s", tmp);
		else
			printf("(nil)");

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
}
