#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - delete node of linked list
 * @head: pointer to head
 * @index: index at which to delete
 *
 * Return: 1 on success, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp = NULL, *to_del;

	if (!(*head))
		return (-1);

	if (index == 0)
	{
		to_del = *head;
		if (to_del->next)
			to_del->next->prev = NULL;
		*head = to_del->next;
		free(to_del);
		return (1);
	}
	for (tmp = *head; tmp->next && i < index - 1;
			tmp = tmp->next, i++)
		continue;

	if (i == index - 1 && tmp->next)
	{
		to_del = tmp->next;
		tmp->next = to_del->next;
		if (to_del->next)
			to_del->next->prev = tmp;
		free(to_del);
		return (1);
	}
	return (-1);
}
