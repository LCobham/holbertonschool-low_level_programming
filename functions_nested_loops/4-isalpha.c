#include "main.h"

/**
 * _isalpha - determines if input corresponds to alphabetic character
 *
 * @c: number to be evaluated
 *
 * Return: 1 if c is alphabetic character and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);

	return (0);
}
