#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - create a hash table of given array size
 * @size: size of the array
 *
 * Return: pointer to hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_node_t *) * size);
	return (table);
}
