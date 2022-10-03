#include <stdio.h>
/**
 * main - print the first 98 Fibonacci numbers
 *
 * Return: 0 on success
 */

int main(void)
{
	unsigned long i, j, first_half_j, second_half_j, first_half_i, second_half_i;
	int count;

	count = 1;
	i = 1;
	j = 2;
	printf("%lu, ", i);
	while (count < 98)
	{
		if (count > 90)
		{
			if (count == 91)
			{
				first_half_j = j / 10000000000;
				second_half_j = j % 10000000000;
				first_half_i = i / 10000000000;
				second_half_i = i % 10000000000;
			}
			printf("%lu%lu", first_half_j, second_half_j);
			if (count != 97)
				printf(", ");
			first_half_j += first_half_i;
			second_half_j = (second_half_j + second_half_i) % 10000000000;
			first_half_i = first_half_j - first_half_i;
			second_half_i = second_half_j - second_half_i;
			count++;
		}
		else
		{
			printf("%lu, ", j);
			j += i;
			i = j - i;
			count++;
		}
	}
	printf("\n");
	return (0);

}
