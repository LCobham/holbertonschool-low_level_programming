#include <stdio.h>

/**
 * main - print numbers from 0 to 9
 *
 * Return: 0 if no errors
 */

int main(void)
{
	int i = 48;
	int j = 97;

	while (i < 58)
	{
		putchar(i);
		if (i == 57)
		{
			while (j < 103)
			{
				putchar(j);
				j++;
			}
		}
		i++;
	}
	putchar(10);
	return (0);
}
