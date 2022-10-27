#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initialize a variable of type 'struct dog'
 * @d: pointer to a struct dog
 * @name: string with dog name
 * @age: age of dog
 * @owner: stringwith owner name
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->owner = owner;
	d->age = age;
}
