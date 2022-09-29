#include "main.h"
/**
 * times_table - print the 9 times table starting on 0
 *
 * Return: 0 on success
 */

void times_table(void)
{
	int i = 0;
	int j, mult, nxt;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			mult = i * j;
			nxt = i * (j + 1);

			if (mult >= 10)
			{
				_putchar(mult / 10 + '0');
				_putchar(mult % 10 + '0');
			}
			else
			{
				_putchar(mult + '0');
			}

			if (j == 9)
			{
				_putchar('\n');
				j++;
				continue;
			}

			_putchar(',');
			_putchar(' ');

			if (nxt < 10)
			{
				_putchar(' ');
			}
			j++;
		}
		i++;
	}
}
