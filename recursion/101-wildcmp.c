#include "main.h"
#include <string.h>

/**
 * wildcmp - compares two strings
 * @s1: string 1
 * @s2: string 2. Can contain wildcard '*'
 *
 * Return: 1 on true, 0 on false
 */

int wildcmp(char *s1, char *s2)
{
	int l1, l2;

	if (s1[0] == s2[0])
	{
		if (s1[0] == '\0')
			return (1);
		return (wildcmp(s1 + 1, s2 + 1));
	}
	if (s2[0] == '*')
	{
		l1 = strlen(s1);
		l2 = strlen(s2);
		if (l1 > l2)
			return (wildcmp(s1 + 1, s2));

		if (l1 == l2)
			return (wildcmp(s1 + 1, s2 + 1));

		if (l1 < l2)
			return (wildcmp(s1, s2 + 1));
	}
	return (0);
}
