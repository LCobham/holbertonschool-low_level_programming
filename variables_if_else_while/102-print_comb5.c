#include <stdio.h>

/**
 * main - print numbers from 0 to 9
 *
 * Return: 0 if no errors
 */

int main(void)
{
	int i, j, m, n;

	i = 48;
	while (i < 58)
	{
		j = 48;
		while (j < 58)
		{
			m = 48;
			while (m < 58)
			{
				n = 48;
				while (n < 58)
				{
					if (m > i || (m == i && n > j))
					{
						putchar(i);
						putchar(j);
						putchar(32);
						putchar(m);
						putchar(n);
						if (i == 57 && m == 57 && n == 57 && j == 56)
						{
							n++;
							continue;
						}
						putchar(44);
						putchar(32);
					}
					n++;
				}
				m++;
			}
			j++;
		}
		i++;
	}
	putchar(10);
	return (0);
}
