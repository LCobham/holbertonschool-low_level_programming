#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - insert node in doubly linked list
 * @h: pointer to head
 * @idx: index at which to insert
 * @n: number to insert
 *
 * Return: pointer to inserted node, or NULL on failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *tmp = NULL, *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		*h = new;
		if (*h != NULL)
			(*h)->prev = new;
		return (new);
	}
	if (*h == NULL)
	{
		free(new);
		return (NULL);
	}
	for (tmp = *h, i = 0; tmp->next && i < idx - 1;
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
	free(new);
	return (NULL);
}
