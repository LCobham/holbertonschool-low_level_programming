#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - free a linked list of ints
 * @head: head of linked list
 *
 * return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp = *head, *i = NULL;

	for (; tmp != NULL;)
	{
		i = tmp;
		tmp = tmp->next;
		free(i);
	}
	*head = NULL;
}
