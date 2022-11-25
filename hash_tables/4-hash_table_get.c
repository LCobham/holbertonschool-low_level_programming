#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - retrieve a value associated to a key
 * @ht: hash table
 * @key: key to look for
 *
 * Return: associated value, or NULL if key wasn't found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *tmp = NULL;

	if (!ht)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	for (tmp = ht->array[index]; tmp; tmp = tmp->next)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
	}
	return (NULL);
}
