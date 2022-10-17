#include <stdlib.h>
#include <stdio.h>

/**
 * main - add numbers passed as arguments
 * @argc: num of args passed in the command line
 * @argv: array of strings
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i, j, __attribute__ ((unused)) sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; *(argv[i] + j) != '\0'; j++)
		{
			if ((*(argv[i] + j) < 48 || *(argv[i] + j) >= 58) && *(argv[i] + j) != '\0')
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	for (i = 1, sum = 0; i < argc; i++)
		sum += atoi(argv[i]);

	printf("%d\n", sum);

	return (0);
}
