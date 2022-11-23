#include "lists.h"

/**
 * sum_dlistint - sum all elements of a linked list
 * @head: head of linked list
 *
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	if (head)
		return (head->n + sum_dlistint(head->next));
	return (0);
}
