#include <stdio.h>

/**
 * main - Fizz-Buzz test
 *
 * Return: 0 on success
 */

int main(void)
{
	int i, count;

	for (i = 1, count = 0; i < 101; i++, count++)
	{
		if (i % 3 == 0 && i % 15 != 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0 && i % 15 != 0)
		{
			printf("Buzz");
			if (count == 99)
				printf("\n");
			else
				printf(" ");
		}
		else if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
