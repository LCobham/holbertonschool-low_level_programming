#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print a linked list of ints
 * @h: head of linked list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *tmp = NULL;
	size_t counter = 0;

	for (tmp = h; tmp != NULL; tmp = tmp->next, counter++)
	{
		printf("%d\n", tmp->n);
	}
	return (counter);
}

