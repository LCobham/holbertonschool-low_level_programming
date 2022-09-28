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
		if (letter == 113 || letter == 101)
		{
			letter++;
			continue;
		}
		putchar(letter);
		letter++;
	}
	putchar(10);
	return (0);
}
