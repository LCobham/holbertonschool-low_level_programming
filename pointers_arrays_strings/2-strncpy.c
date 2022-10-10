#include "main.h"

/**
 * _strncpy - copies string fromsrc to dest, up to n bytes
 * @dest: destination in which src will be copied
 * @src: string which will be copied
 * @n: max number of bytes to copy
 *
 * Return: address to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;
	
	for (i = 0; src[i] != '\0'; i++)
		continue;

	for (j = 0; j < i + 1 && j < n; j++)
		dest[j] = src[j];
	return (dest);
}
