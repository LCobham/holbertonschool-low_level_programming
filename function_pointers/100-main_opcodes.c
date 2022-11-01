#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - print the first n bytes of the objcode of this file
 * @argc: number of args passed
 * @argv: vector of strings containing args passed
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int i, nbytes;
	char *p;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nbytes = atoi(argv[1]);
	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	p = (char *) main;

	for (i = 0; i < nbytes; i++)
	{
		printf("%02hhx", p[i]);
		if (i + 1 < nbytes)
			printf(" ");
	}
	printf("\n");
	return (0);
}
