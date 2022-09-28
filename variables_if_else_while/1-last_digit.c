#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - gen random number and prints info on last digit
 *
 * Return: 0 if no errors encountered
 */

int main(void)
{
	int n;
	int mod;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	mod = n % 10;
	if (mod > 5)
	{
		printf("Last digit of %d is %d and is greated than 5\n", n, mod);
	}
	else if (!mod)
	{
		printf("Last digit of %d is %d and is zero\n", n, mod);
	}
	else
	{
		printf("Last digit of %d if %d and is less than 6 and not zero\n", n, mod);
	}
	return (0);
}
