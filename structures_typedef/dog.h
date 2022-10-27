#ifndef DOG_H
#define DOG_H

/**
 * struct dog - records name of dog, name of owner and age of dog
 * @name: string with name of dog
 * @owner: string with name of owner
 * @age: age of dog
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};
#endif
