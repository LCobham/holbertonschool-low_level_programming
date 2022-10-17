#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiply numbers passed as arguments
 * @argc: num of args passed in the command line
 * @argv: array of strings
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i, mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1, mult = 1; i < argc; i++)
		mult *= atoi(argv[i]);

	printf("%d\n", mult);
	return (0);
}
