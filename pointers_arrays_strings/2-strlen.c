#include "main.h"

/**
 * _strlen - calculates length of a string
 * @s: counts the characters in the array s
 *
 * Return: number of characters
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++) continue;
	return (i);
}
