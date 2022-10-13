#include "main.h"
int max(int a, int b);

/**
 * infinite_add - add two numbers
 * @n1: pointer to number 1
 * @n2: pointer to number 2
 * @r: pointer to buffer to store the result
 * @size_r: buffer size
 *
 * Return: pointer to result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, s1, s2, carry, x, m, k;

	for (i = 0; n1[i] != '\0'; i++)
		continue;
	for (j = 0; n2[j] != '\0'; j++)
		continue;

	k = max(i, j) + 2;
	if (size_r < k)
	{
		r = 0;
		return (r);
	}
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
			if (i >= 0 && j >= 0 && x != 0)
				r[k - m - 2] = s1 + s2 + x - '0';
		}
		m++;
		s1 = '0';
		s2 = '0';
	}
	return (r);
}

/**
 * max - return the max of two values
 * @a: int
 * @b: int
 * Return: max(a,b)
 */

int max(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}
