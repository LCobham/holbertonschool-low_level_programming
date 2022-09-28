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
		if (letter == 113 || letter == 101)
			continue;
		putchar(letter);
	}
	putchar(10);
	return (0);
}
