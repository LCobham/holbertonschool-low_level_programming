#include "main.h"

int in(char c, char *str);

/**
 * _strspn - count n of bytes of s that are in accept
 * @s: string 1
 * @accept: string to be compared
 *
 * Return: num of equal bytes at start
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;

	for (i = 0; in(s[i], accept) == 1; i++)
		continue;
	return (i);
}

/**
 * in - checks if character is in an array
 * @c: char
 * @str: array
 *
 * Return: 1 if true, 0 if false
 */

int in(char c, char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (c == str[i])
			return (1);
	}
	return (0);
}
