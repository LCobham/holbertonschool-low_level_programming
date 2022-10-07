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

	for (len = 0; *(s + len) != '\0'; len++)
		continue;
	len--;
	for (i = 0; i <= len / 2; i++)
	{
		c = *(s + i);
		*(s + i) = *(s + len - i);
		*(s + len - i) = c;
	}
}
