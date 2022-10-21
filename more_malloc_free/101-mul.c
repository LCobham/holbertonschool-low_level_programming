#include "main.h"
#include <stdio.h>
#include <string.h>

char *mult_str(char *str1, char *str2);

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
	printf("%s\n", result);
	free(result);
	return (0);
}

/**
 * mult_str - multiply two positive numbers passed as string
 * @str1: string 1 (only digits)
 * @str2: string 2 (only digits)
 *
 * Return: pointer to str with result. Must be freed after usage.
 */

char *mult_str(char *str1, char *str2)
{
	int i, j, result_len, N, carry;
	char *p;

	result_len = strlen(str1) + strlen(str2);
	if ((str1[0] - '0') * (str2[0] - '0') < 9)
		       result_len--;	

	p = malloc(result_len + 1);
	if (p == NULL)
	{
		printf("Malloc failed\n");
		exit(98);	
	}
	p[result_len] = '\0';

	for (i = strlen(str2) - 1, carry = 0; i >= 0; i--)
	{
		for (j = strlen(str1) - 1; j >= 0; j--)
		{
			N = (str2[i] - '0') * (str1[j] - '0') + carry;
			printf("N is %d\n", N);
			p[--result_len] = (N % 10) + '0';
			carry = (N / 10) % 10;
		}
	}

	return (p);
}


/**
 * infinite_add - add two numbers
 * @n1: pointer to number 1
 * @n2: pointer to number 2
 *
 * Return: pointer to result. Must be freed after usage.
 */

char *infinite_add(char *n1, char *n2)
{
	int i, j, s1, s2, carry, x, m, k;
	char *r;

	i = strlen(n1);
	j = strlen(n2);

	if (i < j)
		k = j;
	else 
		k = i;	

	r = malloc(k + 2);
	r[k - 1] = '\0';
	for  (m = 0, carry = 0, i--, j--; k - 1 - m > 0;)
	{
		x = carry;
		if (i >= 0)
		{
			s1 = n1[i];
			i--;
		}
		if (j >= 0)
		{
			s2 = n2[j];
			j--;
		}
		if (s1 + s2 + x - '0' > '9')
		{
			carry = 1;
			r[k - m - 2] = s1 + s2 + x - 10 - '0';
		}
		else
		{
			carry = 0;
			r[k - m - 2] = s1 + s2 + x - '0';
		}
		m++;
		s1 = '0';
		s2 = '0';
	}
	if (r[0] == '0')
		for (m = 0; m < k - 1; m++)
			r[m] = r[m + 1];
	return (r);
}
