#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - print a hash table
 * @ht: hash table
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	int i, j;
	hash_node_t *tmp = NULL;

	if (!ht)
		return;

	for (j = ht->size; j > 0; j--)
		if (ht->array[j])
			break;
	/* Last index to print should be j*/
	printf("{");
	for (i = 0; (unsigned long int) i < (ht->size); i++)
	{
		if (ht->array[i])
		{
			for (tmp = ht->array[i]; tmp; tmp = tmp->next)
				printf("\'%s\': \'%s\'", tmp->key, tmp->value);
			if (i != j)
				printf(", ");
		}
	}
	printf("}\n");
}
