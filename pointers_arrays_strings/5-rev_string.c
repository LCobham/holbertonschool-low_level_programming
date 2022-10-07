#include "main.h"
/**
 * rev_string - reverse a string
 * @s: address of first char in the string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, len;
	char c;

	len = _strlen(s) - 1;
	for (i = 0; i < len / 2; i++)
	{
		c = *(s + i);
		*(s + i) = *(s + len - i);
		*(s + len - i) = c;
	}
}


/**
 * _strlen - calculates length of a string
 * @s: counts the characters in the array s
 *
 * Return: number of characters
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
		continue;
	return (i);
}

