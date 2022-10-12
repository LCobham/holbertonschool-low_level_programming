#include "main.h"

/**
 * _memset - fill memory with a constant byte
 * @s: string
 * @b: char to fill memory with
 * @n: number of bytes
 * Return: pointer to modified str
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
