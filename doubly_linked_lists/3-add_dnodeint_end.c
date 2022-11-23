#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - add node at end of doubly linked list
 * @head: pointer to head
 * @n: int to add in node
 *
 * Return: address of new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *tmp = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->n = n;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	for (tmp = *head; tmp->next; tmp = tmp->next)
		continue;
	tmp->next = new;
	new->prev = tmp;
	return (new);
}
