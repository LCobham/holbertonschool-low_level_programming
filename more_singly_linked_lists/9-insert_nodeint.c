#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert a given node at a particular index
 * @head: pointer to head
 * @idx: index
 * @n: number of node to insert
 *
 * Return: address of new node or NULL on failure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *tmp, *new_node;

	if (*head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	for (tmp = *head; tmp != NULL && i < idx - 1; tmp = tmp->next, i++)
		continue;

	if (i == idx - 1)
	{
		new_node->next = tmp->next;
		tmp->next = new_node;
		return (new_node);
	}
	return (NULL);
}
