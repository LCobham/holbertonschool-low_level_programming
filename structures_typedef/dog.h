#ifndef DOG_H
#define DOG_H

#include <stdlib.h>

/**
 * struct dog - records name of dog, name of owner and age of dog
 * @name: string with name of dog
 * @owner: string with name of owner
 * @age: age of dog
 */

typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
