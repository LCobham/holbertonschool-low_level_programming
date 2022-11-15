#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert node in a given index
 * @head: pointer to head
 * @idx: index
 * @n: number in node
 *
 * Return: pointer to new node, of NULL on failure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *tmp, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	if (*head == NULL)
		return (NULL);

	for (i = 0, tmp = *head; tmp && i < idx - 1; tmp = tmp->next, i++)
		continue;

	if (i == idx - 1)
	{
		new->next = tmp->next;
		tmp->next = new;
		return (new);
	}
	return (NULL);
}
