#include "lists.h"

/**
 * get_nodeint_at_index - return then nth node of a linked list
 * @head: head of linked list
 * @index: number of node to return
 *
 * Return: node address or NULL if it doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = NULL;

	if (head == NULL)
		return (NULL);

	for (tmp = head, i = 0; tmp->next != NULL && i < index; tmp = tmp->next, i++)
		continue;

	if (i == index)
		return (tmp);
	return (NULL);
}
