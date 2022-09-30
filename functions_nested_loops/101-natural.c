#include "main.h"
/**
 * natural - prints the sum of all multiples of 3 & 5 below 1024
 *
 * Return: 0 if success
 */

void natural(void)
{
	int i, count;

	count = 0;
	i = 1;
	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
			count += i;

		i++;
	}
	_putchar(count / 100000 + '0');
	_putchar((count % 100000) / 10000 + '0');
	_putchar((count % 10000) / 1000 + '0');
	_putchar((count % 1000) / 100 + '0');
	_putchar((count % 100) / 10 + '0');
	_putchar((count % 10) + '0');
	_putchar('\n');
}
