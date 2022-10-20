#include "main.h"

/**
 * string_nconcat - concatenate two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to new space in memory w concatenated str
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2, i;
	char *p;

	if (s1 == NULL)
		return (string_nconcat("", s2, n));
	if (s2 == NULL)
		return (string_nconcat(s1, "", n));

	for (l1 = 0; s1[l1] != '\0'; l1++)
		continue;
	for (l2 = 0; s2[l2] != '\0'; l2++)
		continue;
	
	if (n > l2)
		n = l2;

	p = malloc(l1 + 1 + n);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
		p[i] = s1[i];
	for (i = 0; i < n; i++)
		p[l1 + i] = s2[i];

	p[l1 + 1 + n] = '\0';
	return (p);
}
