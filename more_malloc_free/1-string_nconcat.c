#include "main.h"

/**
 * string_nconcat - concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * @n: max number of bytes to copy from s2
 *
 * Return: pointer to new space in memory w concatenated str
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, m;
	char *p;

	if (s1 == NULL)
		return (string_nconcat("", s2, n));
	if (s2 == NULL)
		return (string_nconcat(s1, "", n));

	for (i = 0; s1[i] != '\0'; i++)
		continue;
	for (j = 0; s2[j] != '\0'; j++)
		continue;

	p = malloc(i + j + 1);
	if (p == NULL)
		return (NULL);

	for (m = 0; m < i; m++)
		p[m] = s1[m];
	for (m = 0; m < j && m < (int) n; m++)
		p[i + m] = s2[m];
	p[i + j] = '\0';
	return (p);
}
