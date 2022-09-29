#include "main.h"
/**
 * times_table - print the 9 times table starting on 0
 *
 * Return: 0 on success
 */

void times_table(void)
{
	int i = 0;
	int j, mult;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			mult = i * j;
			if (mult < 10)
			{
				_putchar(mult + '0');
			}
			else
			{
				_putchar(mult / 10 + '0');
				_putchar(mult % 10 + '0');
			}

			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}

			j++;
		}
		_putchar('\n');
		i++;
	}
}
