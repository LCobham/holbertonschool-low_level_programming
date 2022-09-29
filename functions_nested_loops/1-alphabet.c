#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	int i = 0;

	while ('a' + i <= 'z')
	{
		_putchar('a' + i);
		i++;
	}
	_putchar('\n');
	return;
}
