#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delete specific node of linked list
 * @head: pointer to head
 * @index: index which should be deleted
 *
 * Return: 1 on succes, -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *j = NULL, *tmp = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		tmp = *head;
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	for (tmp = *head, i = 0; tmp && i < index - 1; tmp = tmp->next, i++)
		continue;

	if (i == index - 1)
	{
		j = tmp->next;
		tmp->next = j->next;
		free(j);
		return (1);
	}
	return (-1);
}
