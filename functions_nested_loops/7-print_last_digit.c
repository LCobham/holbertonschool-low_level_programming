#include "main.h"
/**
 * print_last_digit - prints last digit of an int
 * @i: integer of which we print the last digit
 *
 * Return: value of last digit
 */

int print_last_digit(int i)
{
	int result = i % 10;

	if (result < 0)
		result *= -1;

	_putchar(result + '0');
	return (result);
}
