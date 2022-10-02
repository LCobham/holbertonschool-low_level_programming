#include <stdio.h>
/**
 * main - prints the sum of all multiples of 3 & 5 below 1024
 *
 * Return: 0 if success
 */

int main(void)
{
	int i, count;

	count = 0;
	i = 1;
	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
			count += i;

		i++;
	}
	printf("%d\n", count);
	return (0);
}
