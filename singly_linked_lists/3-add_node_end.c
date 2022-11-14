#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - add a node to the end of a linked list
 * @head: pointer pointer to first element
 * @str: string to add in new node
 *
 * Return: address of new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = NULL, *tmp = *head;
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
	for (i = 0; str[i] != '\0'; i++)
		continue;
	new->len = i;
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
