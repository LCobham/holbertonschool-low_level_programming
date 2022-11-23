#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - add node at beginning of d linked list
 * @head: pointer to head
 * @n: int to add
 *
 * Return: address of newly created node, or NULL on failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->next = *head;
	new->prev = NULL;
	new->n = n;

	if (*head != NULL)
		(*head)->prev = new;

	*head = new;
	return (new);
}
