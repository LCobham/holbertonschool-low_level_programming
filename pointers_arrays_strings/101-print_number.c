#include "main.h"
#include <limits.h>
int power_of(int a, int b);

/**
 * print_number - prints an int
 * @n: integer to be printed
 *
 * Return: void
 */

void print_number(int n)
{
	int i, digits, abs, print;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	abs = n;
	if (n < 0)
	{
		_putchar('-');
		if (n == INT_MIN)
			abs = INT_MAX;
		else
			abs = -n;
	}

	for (digits = 10; abs / power_of(10, digits - 1) == 0; digits--)
		continue;

	for (i = digits - 1; i >= 0; i--)
	{
		print = (abs / power_of(10, i)) % 10;
		if (n == INT_MIN && i == 1)
			_putchar('8');
		else
			_putchar(print + '0');
	}

}

/**
 *power_of - compute a^b
 *@a: base
 *@b: exponent
 *
 *Return: a^b. Will return 1 on 0^0
 */

int power_of(int a, int b)
{
	int result = 1;

	if (b == 0)
		return (1);
	if (b < 0)
	{
		b *= -1;
		for (; b > 0; b--)
		{
			result /= a;
		}
		return (result);
	}
	else
	{
		for (; b > 0; b--)
		{
			result *= a;
		}
		return (result);
	}

}
