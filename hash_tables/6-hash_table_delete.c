#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - delete a given hash table
 * @ht: hash table
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	int i;
	hash_node_t *tmp = NULL, *tmp2 = NULL;

	for (i = 0; (unsigned long int) i < ht->size; i++)
	{
		if (ht->array[i])
		{
			for (tmp = ht->array[i]; tmp;)
			{
				tmp2 = tmp;
				tmp = tmp->next;
				free(tmp2->key);
				free(tmp2->value);
				free(tmp2);
			}
		}
	}
	free(ht->array);
	free(ht);
}
