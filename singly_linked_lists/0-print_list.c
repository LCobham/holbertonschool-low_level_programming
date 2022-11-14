#include "lists.h"
#include <stdio.h>

/**
 * print_list - print all elements of a linked list
 * @h: head of linked list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t counter = 0;
	const list_t *tmp = NULL;

	for (tmp = h; tmp != NULL; tmp = tmp->next, counter++)
	{
		if (tmp->str != NULL)
			printf("[%u] %s\n", tmp->len, tmp->str);
		else
			printf("[0] (nil)\n");
	}
	return (counter);
}
