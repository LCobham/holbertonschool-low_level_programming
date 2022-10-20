#include "main.h"
#include <string.h>
int min(int a, int b);

/**
 * _realloc - rellocate a block of memory using malloc & free
 * @ptr: pointer obtained in previous malloc call
 * @old_size: previous size assigned by malloc
 * @new_size: new size of memory
 *
 * Return: void pointer to newly allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int k;
	void *q;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0 && ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	q = malloc(new_size);
	k = min(new_size, old_size);
	memcpy(q, ptr, k);

	free(ptr);
	return (q);
}

/**
 * min - return the minimum of two ints
 * @a: int
 * @b: int
 *
 * Return: min(a, b)
 */

int min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}
