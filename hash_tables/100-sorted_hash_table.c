#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int insert_in_order(shash_node_t *node, shash_table_t *ht);

/**
 * shash_table_create - create a sorted hash table
 * @size: size of array in hash table
 *
 * Return: pointer to sorted hash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_node_t **array;
	shash_table_t *result;

	result = malloc(sizeof(shash_table_t));
	if (!result)
		return (NULL);

	result->size = size;
	result->shead = NULL;
	result->stail = NULL;

	array = malloc(sizeof(shash_node_t *) * size);
	if (!array)
	{
		free(result);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		array[i] = NULL;

	result->array = array;
	return (result);
}


/**
 * shash_table_set - add a value to sorted hash table
 * @ht: sorted hash table
 * @key: key
 * @value: value
 *
 * Return: 1 on success, 0 on failure
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *tmp = NULL, *new = NULL;
	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	if (!ht || !key)
		return (0);
	
	if (ht->array[index])
	{
		for (tmp = ht->array[index]; tmp; tmp = tmp->next)
		{
			if (strcmp(key, tmp->key) == 0)
			{
				free(tmp->value);
				tmp->value = strdup(value);
				if (!(tmp->value))
					return (0);
				return (1);
			}
		}
	}
	new = malloc(sizeof(shash_node_t));
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
	new->next = ht->array[index];
	ht->array[index] = new;
	insert_in_order(new, ht);
	return (1);
}


/**
 * insert_in_order - insert a shash_node_t in order, in doubly linked list
 * @node: shash_node_t node
 * @ht: shash_table_t
 *
 * Return: 1 on success
 */

int insert_in_order(shash_node_t *node, shash_table_t *ht)
{
	shash_node_t *tmp = NULL;
	
	/* First check if table is empty (meaning shead && stail == NULL) */
	if (!ht->shead) /* If table is empty, insert in first position */
	{
		node->sprev = NULL;
		node->snext = NULL;
		ht->shead = node;
		ht->stail = node;
		return (1);
	}
	for (tmp = ht->shead; tmp->snext; tmp = tmp->snext)
	{
		if (strcmp(node->key, tmp->key) < 0)
		{
			if (ht->shead == tmp) /*If on 1st position we change shead*/
				ht->shead = node;
			node->snext = tmp;
			node->sprev = tmp->sprev;
			tmp->sprev = node;
			return (1);
		}
	}
	/* If node hasn't been inserted yet, it means that tmp->snext == NULL */
	node->snext = NULL;
	node ->sprev = tmp;
	tmp->snext = node;
	ht->stail = node;
	return (1);
}



/**
 * shash_table_get - retrieve the value associated to a key
 * @ht: sorted hash table
 * @key: key we're searching for
 *
 * Return: associated value
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *tmp = NULL;
	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	if (!ht)
		return (NULL);

	for (tmp = ht->array[index]; tmp; tmp = tmp->next)
	{
		if (!strcmp(key, tmp->key))
			return (tmp->value);
	}
	return (NULL);
}



/**
 * shash_table_print - print sorted hash table in order
 * @ht: sorted hash table
 *
 * Return: void
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp = NULL;

	printf("{");
	for (tmp = ht->shead; tmp; tmp = tmp->snext)
	{
		printf("\'%s\': \'%s\'", tmp->key, tmp->value);
		if (tmp->snext)
			printf(", ");
	}
	printf("}\n");
}


/**
 * shash_table_print_rev - print sorted hash table in reverse order
 * @ht: sorted hash table
 *
 * Return: void
 */

void shash_table_print_rev(const shash_table_t *ht)
{
        shash_node_t *tmp = NULL;
 
        printf("{");
        for (tmp = ht->stail; tmp; tmp = tmp->sprev)
        {
                printf("\'%s\': \'%s\'", tmp->key, tmp->value);
                if (tmp->sprev)
                        printf(", ");
        }
        printf("}\n");
}


/**
 * shash_table_delete - delete sorted hash table
 * @ht: sorted hash table
 *
 * Return: void
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *tmp, *tmp2;

	for (tmp = ht->shead; tmp;)
	{
		tmp2 = tmp;
		tmp = tmp2->snext;
		free(tmp2->key);
		free(tmp2->value);
		free(tmp2);
	}
	free(ht->array);
	free(ht);
}
