#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free all memory used in a linked list
 * @head: head of linked list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *tmp, *i = head;

	for (; i != NULL;)
	{
		tmp = i;
		i = i->next;
		free(tmp->str);
		free(tmp);
	}
}
