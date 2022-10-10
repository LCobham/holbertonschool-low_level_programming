#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string 1
 * @src: srting 2, will appear after str1
 * @n: max number of bytes used from src
 *
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		continue;
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
