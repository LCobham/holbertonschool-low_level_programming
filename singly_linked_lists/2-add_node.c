#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - add a new node at the beginning of a linked list
 * @head: pointer to fist element in linked list
 * @str: string of the new node
 *
 * Return: address of new element or NULL if malloc failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;
	size_t i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	for (i = 0; str[i]; i++)
		continue;
	new->len = i;
	new->next = *head;
	*head = new;
	return (new);
}
