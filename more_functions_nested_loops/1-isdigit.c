#include "main.h"

/**
 * _isdigit - Returns 1 if digit & 0 otherwise
 * @c: int of which the corresponding char in ASCII will be evaluated
 *
 * Return: 1 if digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
