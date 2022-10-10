#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 0 if equal, not zero if different
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] - s2[i] == 0)
			continue;
		else
			return (s1[i] - s2[i]);
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		if (s2[i] - s1[i] == 0)
			continue;
		else
			return (s2[i] - s1[i]);
	}
	return (0);


}
