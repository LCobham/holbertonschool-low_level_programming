#include <stdio.h>

/**
 * main - print alphabet
 *
 * Return: 0 if no errors
 */

int main(void)
{
	int lower = 97;
	int upper = 65;

	while (lower < 123)
	{
		putchar(lower);
		lower++;
	}
	while (upper < 91)
	{
		putchar(upper);
		upper++;
	}
	putchar(10);
	return (0);
}
