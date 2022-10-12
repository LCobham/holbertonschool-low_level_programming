#include "main.h"

int in(char c, char *str);

/**
 * _strpbrk - locates the first occurrance of bytes from one str in another
 * @s: str in which we search
 * @accept: str which will provide chars to be searched
 *
 * Return: pointer to first occurrance or NULL if none found
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (in(s[i], accept))
			return (&s[i]);
	}
	if (in(s[i], accept))
		return (&s[i]);

	return (NULL);
}

/**
 * in - checks if character is in an array
 * @c: char
 * @str: array
 *
 * Return: 1 if true, 0 if false
 */

int in(char c, char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (c == str[i])
			return (1);
	}
	return (0);
}
