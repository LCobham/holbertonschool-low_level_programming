#include <stdio.h>
/**
 * main - prints combinations of 3 digits
 *
 * Return: 0 if no errors
 */

int main(void)
{
	int i = 48, j, m;

	while (i < 58)
	{
		j = i + 1;
		while (j < 58)
		{
			m = j + 1;
			while (m < 58)
			{
				if (i < j && j < m)
				{
					putchar(i);
					putchar(j);
					putchar(m);

					if (i == 55 && j == 56 && m == 57)
					{
						m++;
						continue;
					}

					putchar(44);
					putchar(32);
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
