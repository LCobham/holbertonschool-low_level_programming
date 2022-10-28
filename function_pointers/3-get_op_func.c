#include "3-cal.h"

/**
 * get_op_func - return a pointer to the function of the operator passed as arg
 * @s: operator, passed as string
 *
 * Return: pointer to a function that takes two ints as arguments
 * and returns an int
 */

int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};

	while (i < 5)
	{
		if (s[0] == ops[i].op[0])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
