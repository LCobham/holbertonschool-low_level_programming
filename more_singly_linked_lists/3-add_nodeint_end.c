#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - add a node at the end of a linked list of ints
 * @head: pointer to head of linked list
 * @n: int to add
 *
 * Return: address of new node or NULL if malloc fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp = *head, *new = NULL;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (tmp == NULL)
		*head = new;
	else
	{
		for (; tmp->next != NULL; tmp = tmp->next)
			continue;
		tmp->next = new;
	}

	return (new);
}
