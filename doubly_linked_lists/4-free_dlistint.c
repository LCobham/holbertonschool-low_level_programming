#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - free a doubly linked list
 * @head: head of linked list
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		free_dlistint(head->next);
		free(head);
	}
}
