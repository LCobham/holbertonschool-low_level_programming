#include <stdlib.h>

/**
 * create_array - create an array of characters and initialize the first char
 * @size: size of array
 * @c: char
 *
 * Return: pointer to str or NULL if size = 0
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *p = NULL;

	if (size == 0)
		return (0);

	p = malloc(size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < (int) size; i++)
	{
		p[i] = c;
	}
	return (p);
}
