#include <stdio.h>

/**
 * main - print alphabet
 *
 * Return: 0 if no errors
 */

int main(void)
{
	int letter = 122;

	while (letter >= 97)
	{
		putchar(letter);
		letter--;
	}
	putchar(10);
	return (0);
}
