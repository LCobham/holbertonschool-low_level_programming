#include "main.h"

/**
 * _islower - determines if char is lowercase
 *@c: int representing the ascii character to be evalated
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (97 <= c && 122 >= c)
		return (1);
	return (0);
}
