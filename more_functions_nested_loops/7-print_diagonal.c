#include "main.h"

/**
 * print_diagonal - prints a diagonal in your terminal
 * @n: size of the diagonal
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i = n, j;

	if (n > 0)
	{
		for (; n > 0; n--)
		{
			_putchar('\\');
			_putchar('\n');
			for (j = i - n + 1; j > 0; j--)
				_putchar(' ');
		}
	}
	_putchar('\n');
}

