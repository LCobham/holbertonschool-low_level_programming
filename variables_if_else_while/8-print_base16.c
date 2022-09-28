#include <stdio.h>

/**
 * main - print numbers from 0 to 9
 *
 * Return: 0 if no errors
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i == 57)
		{
			for (i = 97; i < 103; i++)
			{
				putchar(i);
			}
		}
	}
	putchar(10);
	return (0);
}
