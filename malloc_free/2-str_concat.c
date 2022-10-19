#include "main.h"

/**
 * str_concat - concatenate two strings and store the aswer in a new place
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to new string
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *p;

	if (s1 == NULL)
		return (str_concat("", s2));
	if (s2 == NULL)
		return (str_concat(s1, ""));

	for (i = 0; s1[i]; i++)
		continue;
	for (j = 0; s2[j]; j++)
		continue;

	p = malloc(i + j + 1);
	if (p == NULL)
		return (NULL);


	for (i = 0; s1[i]; i++)
		p[i] = s1[i];
	for (j = 0; s2[j]; j++)
		p[i + j] = s2[j];
	p[i + j] = '\0';
	return (p);
}
