#include "main.h"

int palindrome(char *str, int strlen);

/**
 * is_palindrome - checks if a str is a palindrome
 * @s: string
 *
 * Return: 1 if true, 0 if false
 */

int is_palindrome(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		continue;

	return (palindrome(s, i));
}


/**
 * palindrome - checks if a str is a palindrome
 * @str: string
 * @strlen: length of str
 *
 * Return: 1 if true, 0 if false
 */

int palindrome(char *str, int strlen)
{
	if (strlen == 0 || strlen == 1)
		return (1);
	if (str[0] == str[strlen - 1])
		return (palindrome(str + 1, strlen - 2));
	return (0);
}
