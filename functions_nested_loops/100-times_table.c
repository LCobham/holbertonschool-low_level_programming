#include "main.h"
/**
 * print_times_table - prints the times table of n
 * @n: fun will print the times table from 0 to n
 *
 * Return: void
 */

void print_times_table(int n)
{
	int i, j, mult;

	i = 0;
	if (n < 0 || n > 15)
		return;
	while (i < n + 1)
	{
		j = 0;
		while (j < n + 1)
		{
			mult = i * j;
			if (mult > 99)
				_putchar(mult / 100 + '0');
			if (mult > 9)
				_putchar((mult % 100) / 10 + '0');
			_putchar(mult % 10 + '0');
			if (j == n)
			{
				_putchar('\n');
				j++;
				continue;
			}
			_putchar(',');
			_putchar(' ');
			if (mult + i < 10)
				_putchar(' ');
			if (mult + i < 100)
				_putchar(' ');
			j++;
		}
		i++;
	}
}
