#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print a doubly linked list holding an int
 * @h: head
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;
	const dlistint_t *tmp = NULL;

	for (tmp = h; tmp; tmp = tmp->next, counter++)
		printf("%d\n", tmp->n);

	return (counter);
}

