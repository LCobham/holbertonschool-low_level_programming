#include "lists.h"
#include <stdio.h>

/**
 * listint_len - calculate the number of nodes in a linked list
 * @h: head of linked list
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *tmp = NULL;
	size_t counter = 0;

	for (tmp = h; tmp != NULL; tmp = tmp->next, counter++)
		continue;
	return (counter);
}

