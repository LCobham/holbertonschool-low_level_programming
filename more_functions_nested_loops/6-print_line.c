#include "main.h"

/**
 * print_line - print n number of "_" characters
 * @n: number of "_" characters to be printed, if n > 0
 *
 * Return: void
 */

void print_line(int n)
{
	if (n > 0)
		for (; n > 0; n--)
			_putchar('_');
	_putchar('\n');
}
