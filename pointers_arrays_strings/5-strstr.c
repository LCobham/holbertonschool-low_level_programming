#include "main.h"

char *_strchr(char *s, char c);
int n_occurrances(char *s, char c);

/**
 * _strstr - locate first ocurrance of substr in str
 * @haystack: str
 * @needle: substr
 *
 * Return: pointer to first occurrance or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *p = _strchr(haystack, needle[0]);

	if (p == NULL)
		return (NULL);

	for (i = 0; needle[i] != '\0'; i++)
		continue;
	i--;

	for (j = 0; p[j] == needle[j] && j < i; j++)
		continue;
	if (j == i)
		return (p);
	return (NULL);
}


/**
 * _strchr - finds the first occurrance of a char in str
 * @s: string
 * @c: char searched
 *
 * Return: pointer to first ocurrance or NULL if not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	if (s[i] == c)
		return (&s[i]);
	return (NULL);
}

/**
 * n_occurrances - count num of times char appears in str
 * @s: str
 * @c: char
 *
 * Return: n of occurrances
 */

int n_occurrances(char *s, char c)
{
	int i;

	for (i = 0; s[i]; s[i] == c ? i++ : *s++)
		continue;

	return (i);
}
