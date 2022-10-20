#include "main.h"

/**
 * malloc_checked - allocated memory using malloc
 * @b: bytes of memory to allocate
 *
 * Return: pointer to block of reserved memory
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
