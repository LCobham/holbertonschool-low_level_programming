#include "main.h"

/**
 * string_toupper - changes lowercase letters in str to upper
 * @s: pointer to str
 *
 * Return: pointer to changed str
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] += 'A' - 'a';
	}
	return (s);
}
