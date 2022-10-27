#include "dog.h"

/**
 * free_dog - free the memory used by a dog
 * @d: pointer to struct dog
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	if (d != NULL)
		free(d);
}
