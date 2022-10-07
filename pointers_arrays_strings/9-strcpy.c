#include "main.h"

/**
 * _strcpy - copy a string (inc \0) to another dest
 * @dest: pointer to destination
 * @src: pointer to str that will be copied
 *
 * Return: pointer to destination (@dest)
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
