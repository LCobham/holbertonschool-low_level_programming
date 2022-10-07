#include "main.h"

/**
 * puts_half - prints second half of a given string
 * @str: address of string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, len, n;

	for (len = 0; *(str + len) != '\0'; len++)
		continue;
	if (len % 2 == 0)
		n = len / 2;
	else
		n = len / 2 + 1;

	for (i = 0; n + i < len; i++)
		_putchar(*(str + n + i));
	_putchar('\n');
}
