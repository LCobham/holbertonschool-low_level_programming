#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - free a linked list which may contain loop
 * @h: pointer to head
 *
 * Return: number of elements in free'd list
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp = *h, *i = NULL;
	check_loop *node, *t = NULL, *s = NULL, *check_head = NULL;
	size_t counter = 0;

	while (tmp)
	{
		for (t = check_head; t; t = t->next)
			if (t->current == tmp)
				goto out_of_loop;

		node = malloc(sizeof(check_loop));
			if (node == NULL)
				goto out_of_loop;
		node->current = tmp;
		node->next = check_head;
		check_head = node;
		i = tmp->next;
		free(tmp);
		tmp = i;
		counter++;
	}
out_of_loop:
	for (t = check_head; t;)
	{
		s = t->next;
		free(t);
		t = s;
	}
	if (node == NULL)
		exit(98);
	*h = NULL;
	return (counter);
}
