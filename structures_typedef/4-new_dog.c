#include "dog.h"
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 *
 * Return: pointer to new do
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);

	p->name = malloc(sizeof(name));
	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}
	strcpy(p->name, name);
	p->age = age;

	p->owner = malloc(sizeof(owner));
	if (p->owner == NULL)
	{
		free(p->name);
		free(p);
		return (NULL);
	}
	strcpy(p->owner, owner);
	return (p);
}
