#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: pointer to head
 *
 * Return: pointer to head of reversed linked list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *i = NULL, *j = NULL;

	if (*head == NULL)
		return (NULL);

	i = *head;
	*head = i->next;
	i->next = NULL;
	j = i;

	for (; *head != NULL; )
	{
		i = *head;
		*head = i->next;
		i->next = j;
		j = i;
	}
	*head = i;
	return (*head);
}
