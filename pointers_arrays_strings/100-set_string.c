#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer pointer
 * @to: str being changed
 *
 * Return: void
 */

void set_string(char **s, char *to)
{
	int i;

	for (i = 0; (*s)[i] != '\0'; i++)
		to[i] = (*s)[i];
	to[i] = '\0';

}
