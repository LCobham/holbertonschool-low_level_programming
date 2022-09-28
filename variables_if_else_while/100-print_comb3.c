#include <stdio.h>

/**
 * main - print all combinations of two digits
 *
 * Return: 0 if no errors
 */

int main(void)
{
	int i = 48;
	int j;
	int counter = 48;

	while (i < 58)
	{
		j = 48;
		while (j < 58)
		{
			if (i != j)
			{
				if (j > counter)
				{
					putchar(i);
					putchar(j);

					if (i != 56 || j != 57)
					{
						putchar(44);
						putchar(32);
					}
				}
			}

			j++;
		}

		i++;
		counter++;
	}
	putchar(10);
	return (0);
}
