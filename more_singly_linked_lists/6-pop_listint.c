#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deleate the head node of a linked list
 * @head: pointer to head of linked list
 *
 * Return: the data point of the deleted node, or 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int res;

	if (*head == NULL)
		return (0);
	*head = tmp->next;
	res = tmp->n;

	free(tmp);
	return (res);

}
