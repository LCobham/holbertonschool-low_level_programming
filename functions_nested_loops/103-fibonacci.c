#include <stdio.h>
/**
 * main - print the sum of even numbered terms in Fibonacci seq (n < 4m)
 *
 * Return: 0 on success
 */

int main(void)
{
	long i, j, sum;
	int count;

	sum = 0;
	count = 2;
	i = 1;
	j = 2;

	while (j < 4000000)
	{
		if (count % 2 == 0)
			sum += j;
		j += i;
		i = j - i;
		count++;
	}
	printf("%ld\n", sum);
	return (0);

}
