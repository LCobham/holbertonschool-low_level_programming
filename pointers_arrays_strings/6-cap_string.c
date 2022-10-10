#include "main.h"

int in(char c, char *str);

/**
 * cap_string - capitalize all words of a string
 * @s: pointer to str
 *
 * Return: pointer to modified str
 */

char *cap_string(char *s)
{
	int i;
	char sep[] = {'\n', '\t', ' ', ',',
	';', '.', '!', '?', '"', '(', ')', '{', '}',};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 || in(s[i - 1], sep))
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] += 'A' - 'a';
		}
	}
	return (s);
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

