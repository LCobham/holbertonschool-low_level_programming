#include "main.h"

/**
 * print_triangle - print a triangle using "#"
 * @size: size of triangle in "#" characters
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, spaces;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 1; i <= size; i++)
	{
		for (spaces = size - i; spaces > 0; spaces--)
			_putchar(' ');
		for (j = i; j > 0; j--)
		       _putchar('#');
		_putchar('\n');	
	}
}
