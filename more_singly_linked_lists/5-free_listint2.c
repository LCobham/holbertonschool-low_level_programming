#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - free a linked list of ints, set head to NULL
 * @head: ptr to head of linked list
 *
 * return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp, *i = NULL;

	if (head == NULL)
		return;

	tmp = *head;
	for (; tmp != NULL;)
	{
		i = tmp;
		tmp = tmp->next;
		free(i);
	}
	*head = NULL;
}
