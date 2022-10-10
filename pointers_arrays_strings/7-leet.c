#include "main.h"

/**
 * leet - encode str into 1337
 * @s: string to be encoded
 *
 * Return: pointer to encoded str
 */

char *leet(char *s)
{
	char letters[] = {'a', 'A', 'e', 'E', 'o', 'O',
	't', 'T', 'l', 'L',};
	char numbers[] = {4, 4, 3, 3, 0, 0, 7, 7, 1, 1};
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (s[i] == letters[j])
				s[i] = numbers[j] + '0';
		}
	}
	return (s);
}
