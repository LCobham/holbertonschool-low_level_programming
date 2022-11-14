#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add a node at the start to a linked list of ints
 * @head: pointer to head
 * @n: int to add
 *
 * Return: address of new element or NULL if malloc fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;

	*head = new;
	return (new);
}
