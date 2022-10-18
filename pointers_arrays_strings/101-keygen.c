#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - gen a password
 *
 * Retrun: 0 on success
 */

int main(void)
{
	int a, b, c;
	time_t t;

	srand((unsigned) time(&t));

	for (b = 0, c = 2772; c > 122; b++)
	{
		a = (rand() % 125) + 1;
		printf("%c", a);
		c -= a;
	}
	printf("%c", c);
	return (0);
}
