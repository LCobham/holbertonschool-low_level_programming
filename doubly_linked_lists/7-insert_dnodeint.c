#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - insert node in doubly linked list at index
 * @h: pointer to head
 * @idx: index
 * @n: number to insert
 *
 * Return: address of new node or NULL on failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = NULL, *new = NULL;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;

	for (tmp = *h; tmp && tmp->next && i < idx - 1;
			tmp = tmp->next, i++)
		continue;

	if (i == idx - 1)
	{
		new->next = tmp->next;
		new->prev = tmp;
		tmp->next->prev = new;
		tmp->next = new;
		return (new);
	}
	else if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		if (*h)
			(*h)->prev = new;
		*h = new;
	}
	return (NULL);
}
