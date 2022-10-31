#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - print something of any given format
 * @format: format of data type to be printed
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i = 0, j;
	float fl;
	char ch, *st;
	va_list ap;

	if (format != NULL)
	{
		va_start(ap, format);
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
					ch = (char) va_arg(ap, int);
					printf("%c", ch);
					break;
				case 'i':
					j = va_arg(ap, int);
					printf("%d", j);
					break;
				case 'f':
					fl = (float) va_arg(ap, double);
					printf("%f", fl);
					break;
				case 's':
					st = va_arg(ap, char *);
					while (st == NULL)
						st = "(nil)";
					printf("%s", st);
					break;
				default:
					i++;
					continue;
			}
		if (format[i++ + 1] != '\0')
			printf(", ");
		}
	va_end(ap);
	}
	printf("\n");
}
