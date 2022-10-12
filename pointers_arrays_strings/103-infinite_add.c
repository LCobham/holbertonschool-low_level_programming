#include "main.h"
void rev_string(char *s);
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
	int i, j, s1, s2, x, carry, m;

	for (i = 0; n1[i] != '\0'; i++)
		continue;
	for (j = 0; n2[j] != '\0'; j++)
		continue;

	if (max(i, j) + 2 > size_r)
	{
		r = 0;
		return (r);
	}

	for (i--, j--; i >= 0 && j >= 0;)
	{
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
		if (s1 + s2 + x > '9' + '0')
		{
			carry = 1;
			r[m] = s1 + s2 + x - 10 - '0';
			m++;

		}
		else
		{
			carry = 0;
			r[m] = s1 + s2 + x - '0';
			m++;
		}
		x = carry;
		s1 = 0;
		s2 = 0;
	}

	if (x == 1)
	{
		r[m] = 1;
		m++;
	}
	r[m] = '\0';
	rev_string(r);
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


/**
 * rev_string - reverse a string
 * @s: address of first char in the string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, len;
	char c;

	for (len = 0; *(s + len) != '\0'; len++)
		continue;
	len--;
	for (i = 0; i <= len / 2; i++)
	{
		c = *(s + i);
		*(s + i) = *(s + len - i);
		*(s + len - i) = c;
	}
}
