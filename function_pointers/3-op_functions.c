#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - sum two ints
 * @a: int
 * @b: int
 *
 * Return: a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - subtract two ints
 * @a: int
 * @b: int
 *
 * Return: a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - multiply two ints
 * @a: int
 * @b: int
 *
 * Return: a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - floored division of a / b
 * @a: int
 * @b: int
 *
 * Return: a / b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}


/**
 * op_mod - calculate the remainder of a / b
 * @a: int
 * @b: int
 *
 * Return: a % b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
