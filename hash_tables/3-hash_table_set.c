#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - add an element to the hash table
 * @ht: address of hash table to which we shall add
 * @key: key to add
 * @value: value to add
 * Return: 1 on success, 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index;
	hash_node_t *new = NULL;

	if (!ht || !key)
		return (0);

	/* Create new node */
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);

	new->key = strdup(key);
	if (!(new->key))
	{
		free(new);
		return (0);
	}
	new->value = strdup(value);
	if (!(new->value))
	{
		free(new->key);
		free(new);
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);

	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
