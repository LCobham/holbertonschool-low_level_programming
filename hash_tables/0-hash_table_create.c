#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - create a hash table of a given size
 * @size: size of table
 *
 * Return: address to struct hash_table_t, or NULL if malloc fails
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *result = NULL;
	hash_node_t **my_array = NULL;
	unsigned long int i;

	result = malloc(sizeof(hash_table_t));
	if (!result)
		return (NULL);

	result->size = size;
	my_array = malloc(sizeof(hash_node_t *) * size);
	if (!my_array)
	{
		free(result);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		my_array[i] = NULL;

	result->array = my_array;
	return (result);
}
