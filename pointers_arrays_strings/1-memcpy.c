#include "main.h"

/**
 * _memcpy - copy n bytes of memory from src to dest
 * @n: number of bytes to copy
 * @src: where we're copying from
 * @dest: where to
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
