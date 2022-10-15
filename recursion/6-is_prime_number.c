#include "main.h"

int prime(int a, int b);

/**
 * is_prime_number - determines if an int is prime
 * @n: int
 *
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	return (prime(2, n));
}


/**
 * prime - iterates using recursion to find a factor of b
 * @a: int that iterates recursively
 * @b: number we want to know if is prime
 *
 * Return: 1 if prime, 0 otherwise (when a = 2);
 */

int prime(int a, int b)
{
	if (b <= 1)
		return (0);
	if (a >= b)
		return (1);
	else if (b % a == 0)
		return (0);
	else
		return (prime(a + 1, b));

}
