#include <stdio.h>

/**
 * main - print numbers from 0 to 9
 *
 * Return: 0 if no errors
 */

int main(void)
{
	int i;
	int j;
	int counter = 0;

	for (i = 48; i < 58; i++, counter++)
	{
		for (j = 49; j < 58; j++)
		{
			if (i != j)
			{
				if (j > counter)
				{
					putchar(i);
					putchar(j);
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
