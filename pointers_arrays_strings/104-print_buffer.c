#include <stdio.h>
#include "main.h"

void spaces(int x);
/**
 * print_buffer - print bytes of buffer
 * @size: number of bytes to print
 * @b: pointer to str
 *
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int i, j, x;

	x = (size % 10) % 9;
	for (i = 0; i < size; i++)
	{
		if (i % 10 == 0)
			printf("%08x: %02x", i, b[i]);
		else if (i % 2 == 1 && (i % 10) % 9 != 0)
			printf("%02x ", b[i]);
		else if ((i % 10) % 9 == 0)
		{
			printf("%02x ", b[i]);
			for (j = i - 9; j <= i; j++)
			{
				if (b[j] >= 32 && b[j] <= 126)
					printf("%c", b[j]);
				else
					printf(".");
			}
			printf("\n");
		}
		else
			printf("%02x", b[i]);
	}
	if (x != 0)
	{
		spaces(x);
		while (x--)
		{
			if (b[i - x - 1] >= 32 && b[i - x - 1] <= 126)
				printf("%c", b[i - x - 1]);
			else
				printf(".");
		}
	}
	printf("\n");
}

/**
 * spaces - print spaces
 * @x: int
 * Return: void
 */

void spaces(int x)
{
	int i;

	if (x == 1)
		i = 23;
	else if (x == 2)
		i = 20;
	else if (x == 3)
		i = 18;
	else if (x == 4)
		i = 15;
	else if (x == 5)
		i = 13;
	else if (x == 6)
		i = 10;
	else if (x == 7)
		i = 8;
	else if (x == 8)
		i = 5;
	else
		i = 3;

	for (; i > 0; i--)
		printf(" ");
}
