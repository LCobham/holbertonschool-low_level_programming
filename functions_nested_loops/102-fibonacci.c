#include <stdio.h>
/**
 * main - print the first 50 Fibonacci numbers
 *
 * Return: 0 on success
 */

int main(void)
{
	long i, j;
	int count;

	count = 2;
	i = 1;
	j = 2;

	printf("%ld, ", i);
	while (count < 51)
	{
		printf("%ld", j);
		if (count != 50)
			printf(", ");

		j += i;
		i = j - i;
		count++;
	}
	printf("\n");
	return (0);

}
