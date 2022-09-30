#include "main.h"
#include <stdio.h>
/**
 * natural - prints the sum of all multiples of 3 & 5 below 1024
 *
 * Return: 0 if success
 */

void natural(void)
{
	int i, count;

	count = 0;
	i = 1;
	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
			count += i;

		i++;
	}
	printf("%d\n", count);
}
