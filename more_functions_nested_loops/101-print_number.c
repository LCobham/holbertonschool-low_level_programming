#include "main.h"

int power_of(int a, int b);
/**
 * print_number - prints a number using _putchar
 *@n: number to be printed
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int i, digits;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	for (i = 10; i > 0; i--)
	{
		digits = n / power_of(10, i);
		if (digits != 0)
		{
			_putchar(digits % 10 + '0');
		}
		if (i == 1)
			_putchar(n % 10 + '0');
	}
	_putchar('\n');
}

/**
 *power_of - compute a^b
 *@a: base
 *@b: exponent
 *
 *Return: a^b. Will return error on 0^0
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
