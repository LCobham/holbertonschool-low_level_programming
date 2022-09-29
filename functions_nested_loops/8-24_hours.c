#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * Return: 0 if success
 */

void jack_bauer(void)
{
	int min = 0;
	int hour = 0;

	while (hour < 24)
	{
		min = 0;
		while (min < 60)
		{
			_putchar(hour / 10 + '0');
			_putchar(hour % 10 + '0');
			_putchar(':');
			_putchar(min / 10 + '0');
			_putchar(min % 10 + '0');
			_putchar('\n');

			min++;
		}
		hour++;
	}
}
