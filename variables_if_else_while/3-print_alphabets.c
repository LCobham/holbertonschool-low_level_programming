#include <stdio.h>

/**
 * main - print alphabet
 *
 * Return: 0 if no errors
 */

int main(void)
{
	int lower;
	int upper;

	for (lower = 97; lower <= 122; lower++)
	{
		putchar(lower);
	}
	for (upper = 65; upper <= 90; upper++)
	{
		putchar(upper);
	}
	putchar(10);
	return (0);
}
