#include "main.h"

/**
 * rot13 - encodes a str using rot13
 * @s: pointer to str
 *
 * Return: pointer to encoded str
 */

char *rot13(char *s)
{
	int i, j;
	char before[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char after[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; before[j] != '\0'; j++)
		{
			if (s[i] == before[j])
			{
				s[i] = after[j];
				i++;
				j = -1;
			}
		}
	}
	return (s);
}
