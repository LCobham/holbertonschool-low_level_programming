#include <stdio.h>
/**
 * main - print the sum of even numbered terms in Fibonacci seq (n < 4m)
 *
 * Return: 0 on success
 */

int main(void)
{
	long i, j, sum;

	sum = 0;
	i = 1;
	j = 2;

	while (j < 4000000)
	{
		if (j % 2 == 0)
			sum += j;
		j += i;
		i = j - i;
	}
	printf("%ld\n", sum);
	return (0);

}
