#include "hash_tables.h"

/**
 * key_index - return the index of a given key
 * @key: key
 * @size: size of array of hash table
 *
 * Return: the index of that key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
