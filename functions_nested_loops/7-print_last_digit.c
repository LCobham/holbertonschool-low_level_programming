#include "main.h"
/**
 * print_last_digit - prints last digit of an int
 * @i: integer of which we print the last digit
 *
 * Return: value of last digit
 */

int print_last_digit(int i)
{
	int result = _abs(i) % 10;

	_putchar(result + '0');
	return (result);
}
