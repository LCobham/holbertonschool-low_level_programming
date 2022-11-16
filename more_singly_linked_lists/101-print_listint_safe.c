#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - print a linked list that may have a loop in it
 * @head: head of linked list
 *
 * Return: number of nodes in list on succes, exit(98) if malloc fails
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp;
	check_loop *new, *new_head = NULL, *i = NULL, *j = NULL;
	size_t counter = 0;

	if (head == NULL)
		return (counter);
	for (tmp = head; tmp; tmp = tmp->next)
	{
		for (i = new_head; i; i = i->next)
		{
			if (i->current == tmp)
			{
				printf("-> [%p] %d\n", (void *)tmp, tmp->n);
				goto out_of_loop;
			}
		}
		new = malloc(sizeof(check_loop));
		if (new == NULL)
		{
			for (i = new_head; i;)
			{	j = i->next;
				free(i);
				i = j;
			}
			exit(98);
		}
		new->current = tmp;
		new->next = new_head;
		new_head = new;
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		counter++;
	}
out_of_loop:
	for (i = new_head; i;)
	{
		j = i->next;
		free(i);
		i = j;
	}
	return (counter);
}
