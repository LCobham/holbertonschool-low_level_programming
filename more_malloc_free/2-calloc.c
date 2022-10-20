#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in array
 * @size: size of each element
 *
 * Return: void pointer to array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i, k;
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	for (i = 0, k = nmemb * size; i < k; i++)
		p[i] = '\0';
	return (p);
}
