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
	int digits, abs, print;

	abs = n;
	if (n < 0 && n != INT_MIN)
	{
		abs = -n;
		if (n == INT_MIN)
			abs = INT_MAX;
		_putchar('-');
	}

	for (digits = 9; (abs / power_of(10, digits)) == 0; digits--)
		if (digits == 1)
			break;

	for (digits++; digits > 0; digits--)
	{
		if (n == 0)
			continue;
		if (digits == 1 && n == INT_MIN)
			_putchar('8');
		else
		{
			print = (abs % power_of(10, digits)) / power_of(10, digits - 1);
			_putchar(print + '0');
		}
	}
	if (n == 0)
		_putchar('0');
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
