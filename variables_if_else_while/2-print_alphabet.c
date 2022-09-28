#include <stdio.h>

/**
 * main - print alphabet
 *
 * Return: 0 if no errors
 */

int main(void)
{
	int letter = 97;

	while (letter < 123)
	{
		putchar(letter);
		letter++;
	}
	putchar(10);
	return (0);
}
