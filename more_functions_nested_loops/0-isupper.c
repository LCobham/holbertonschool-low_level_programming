#include "main.h"

/**
 * _isupper - Returns 1 if uppercase & 0 otherwise
 * @c: int of which the corresponding char in ASCII will be evaluated
 *
 * Return: 1 if uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c<= 90)
		return (1);
	return (0);
}
