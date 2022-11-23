#include "lists.h"

/**
 * get_dnodeint_at_index - get the node at a given index
 * @head: head of linked list
 * @index: index
 *
 * Return: address of node, or NULL if it doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = NULL;
	unsigned int count = 0;

	for (tmp = head; tmp && count < index; tmp = tmp->next, count++)
		continue;

	if (count == index)
		return (tmp);

	return (NULL);
}
