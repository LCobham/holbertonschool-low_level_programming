#include "function_pointers.h"

/**
 * print_name - print name through another function
 * @name: name to print
 * @f: pointer to function that prints the name
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	(*f)(name);
}
