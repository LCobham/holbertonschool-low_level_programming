#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int j = 0;

	while (j < 10)
	{
		i = 0;
		while ('a' + i <= 'z')
		{
			_putchar('a' + i);
			i++;
		}
		_putchar('\n');
		j++;
	}
}
