#include "lists.h"

/**
 * sum_listint - sum all data points in the linked list
 * @head: head of linked list
 *
 * Return: sum of all data points or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int res = 0;
	listint_t *tmp = NULL;

	if (head == NULL)
		return (0);

	for (tmp = head; tmp != NULL; tmp = tmp->next)
		res += tmp->n;

	return (res);
}
