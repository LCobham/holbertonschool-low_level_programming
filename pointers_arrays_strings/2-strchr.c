#include "main.h"

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
	return (NULL);
}
