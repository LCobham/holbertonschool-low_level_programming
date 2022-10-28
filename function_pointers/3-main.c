#include <stdio.h>
#include "3-cal.h"

/**
 * main - a calculator. Usage: ./calc int operator int
 * @argc: number of arguments, should be 3
 * @argv: array of strings passed as arguments
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int x, y;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
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
