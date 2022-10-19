#include "main.h"

/**
 * _strdup - copy a string in another piece of memory
 * @str: string to be copied
 *
 * Return: pointer to new string
 */

char *_strdup(char *str)
{
	int i, len;
	char *p = NULL;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
		continue;

	p = malloc(len + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		p[i] = str[i];

	return (p);
}
