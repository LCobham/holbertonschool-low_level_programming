#include <stdio.h>

/**
 * main - print alphabet
 *
 * Return: 0 if no errors
 */

int main(void)
{
	int letter;

	for (letter = 122; letter >= 97; letter--)
	{
		putchar(letter);
	}
	putchar(10);
	return (0);
}
