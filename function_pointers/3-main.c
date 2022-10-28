#include <stdio.h>
#include "3-calc.h"

/**
 * main - a calculator. Usage: ./calc int operator int
 * @argc: number of arguments, should be 3
 * @argv: array of strings passed as arguments
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int x, y, i;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 0; argv[2][i] != '\0'; i++)
		continue;
	if (i != 1)
	{
		printf("Error\n");
		exit(99);
	}

	x = atoi(argv[1]);
	y = atoi(argv[3]);
	f = get_op_func(argv[2]);

	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", ((*f)(x, y)));
	return (0);
}
