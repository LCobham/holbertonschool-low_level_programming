#include "main.h"

int gimme_sqrt(int r, int t);
/**
 * _sqrt_recursion - return the natural sqrt of a number
 * @n: int
 *
 * Return: natural srqt of n, or -1
 */

int _sqrt_recursion(int n)
{
	return (gimme_sqrt(1, n));
}


/**
 * gimme_sqrt - iterates from 1 to t checking for a natural sqrt
 * @r: the number that iterates
 * @t: number of which we want the natural sqrt
 * Return: natual sqrt or -1
 */

int gimme_sqrt(int r, int t)
{
	if (r * r == t)
		return (r);
	if (r < t)
		return (gimme_sqrt(r + 1, t));
	return (-1);
}
