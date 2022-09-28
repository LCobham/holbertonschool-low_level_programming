#include <stdio.h>

/**
 * main - print alphabet
 *
 * Return: 0 if no errors
 */

int main(void)
{
	int letter;

	for (letter = 97; letter <= 122; letter++)
	{
		putchar(letter);
	}
	putchar(10);
	return (0);
}
