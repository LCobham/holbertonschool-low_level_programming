#include "lists.h"

/**
 * dlistint_len - return the n of elements in doubly linked list
 * @h: head
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;
	const dlistint_t *tmp = NULL;

	for (tmp = h; tmp; tmp = tmp->next, counter++)
		continue;
	return (counter);
}
