#include <stdio.h>
/**
 * main - print the first 98 Fibonacci numbers
 *
 * Return: 0 on success
 */

int main(void)
{
	unsigned long i, j;
	int count;

	count = 2;
	i = 1;
	j = 2;

	printf("%lu, ", i);
	while (count < 99)
	{
		printf("%lu", j);
		if (count != 98)
			printf(", ");

		j += i;
		i = j - i;
		count++;
	}
	printf("\n");
	return (0);

}
