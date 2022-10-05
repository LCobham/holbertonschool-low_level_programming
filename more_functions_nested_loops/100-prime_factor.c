#include <stdio.h>
int is_prime(long n);
/**
 * main - finds and prints the largest prime factor of 612852475143
 *
 * Return: 0 on success
 */

int main(void)
{
	long i;
	long target = 612852475143, last;

	last = target;
	while (target % 2 == 0)
	{
		target /= 2;
		last = 2;
	}
	for (i = 3; i <= target; i += 2)
	while (target % i == 0)
	{
		target /= i;
		last = i;
	}
	if (is_prime(last) == 1)
		printf("%ld\n", last);
	return (0);
}

/**
 * is_prime - checks if a number is prime or not
 *@n: number to be checked
 *Return: 1 if is prime, 0 otherwise
 */

int is_prime(long n)
{
	long i;

	if (n % 2 == 0)
		return (0);
	for (i = 3; i < n; i += 2)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}
