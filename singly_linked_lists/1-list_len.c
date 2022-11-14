#include "lists.h"
#include <stdio.h>

/**
 * list_len - calculate n of elements in a linked list
 * @h: head of linked list
 *
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t counter = 0;
	const list_t *tmp = h;

	for (; tmp != NULL; tmp = tmp->next, counter++)
		continue;

	return (counter);
}
