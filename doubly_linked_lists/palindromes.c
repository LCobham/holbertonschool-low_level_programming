#include "lists.h"
#include <stdio.h>

int is_palindrome(int n);

int main()
{
	int i, j;

	for (i = 999; i >= 900; i--)
	{
		for (j = 999; j >= 900; j--)
			if (is_palindrome(i * j))
					printf("%d * %d = %ld\n", i, j,(long int) i * j);
	}
	return (0);
}

/**
 * is_palindrome: check if a 6 digit n is palindrome
 * @n: number to check
 *
 * Return: 1 on true, 0 on false
 */

int is_palindrome(int n)
{
	/* Check if 6 digit n */
	if (!(n / 100000))
		return (0);
	if (n / 100000 != n % 10)
		return (0);
	if ((n / 10000) % 10 != (n / 10) % 10)
	       	return (0);
	if ((n / 1000) % 10 != (n / 100) % 10)
	       	return (0);

	return (1);
}
