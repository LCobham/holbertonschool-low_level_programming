#include "main.h"
#include <stdio.h>
#include <string.h>

char *mult_str(char *s1, char *s2);

/**
 * main - multiply two positive numbers and print
 * @argc: number of arguments
 * @argv: array of arguments (as string)
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int i, j;
	char *result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (j = 1; j < 3; j++)
	{
		for (i = 0; argv[j][i] != '\0'; i++)
		{
			if (argv[j][i] < 48 || argv[j][i] >= 58)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	result = mult_str(argv[1], argv[2]);
	if (result[0] == '0')
		printf("%s\n", &result[1]);
	else
		printf("%s\n", result);
	free(result);
	return (0);
}

/**
 * mult_str - multiply two positive numbers passed as string
 * @s1: string 1 (only digits)
 * @s2: string 2 (only digits)
 *
 * Return: pointer to str with result. Must be freed after usage.
 */

char *mult_str(char *s1, char *s2)
{
	int i, j, L1, L2, nchars, k, c;
	char *p, *q;

	L1 = strlen(s1);
	L2 = strlen(s2);
	nchars = L1 + L2;

	p = malloc(nchars + 1);
	if (p == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	memset(p, '0', nchars);
	p[nchars] = '\0';

	for (i = L1 - 1; i >= 0; i--)
	{
		c = 0;
		k = nchars - 1 - (L1 - 1 - i);

		for (j = L2 - 1; j >= 0; j--)
		{
			c += (s1[i] - '0') * (s2[j] - '0') + (p[k] - '0');
			p[k--] = (c % 10) + '0';
			c /= 10;
		}
		while (c > 0)
		{
			c += p[k] - '0';
			p[k--] = (c % 10) + '0';
			c /= 10;
		}
	}
	return (p);
}
