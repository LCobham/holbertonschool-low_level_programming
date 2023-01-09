#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list - usea jump search to search for a value on a linked list
 * @list: head of linked list
 * @size: number of nodes in list
 * @value: value being searched for
 * Return: pointer to node where value was found or NULL otherwise
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *left, *right;
	int root = sqrt(size);

	if (!list)
		return (NULL);

	left = list;
	right = move_forward_n(list, root);

	while (right)
	{
		printf("Value checked at index [%ld] = [%d]\n", right->index, right->n);
		if ((right->n >= value) || !right->next)
			break;
		left = right;
		right = move_forward_n(right, root);
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
			left->index, right->index);
	while (left)
	{
		printf("Value checked at index [%ld] = [%d]\n", left->index, left->n);
		if (left->n == value)
			return (left);
		else if (left->n > value)
			break;
		left = left->next;
	}
	return (NULL);
}

/**
 * move_forward_n - move forward n spots in a linked list
 * @node: starting point
 * @n: number of positions forward to move
 *
 * Return: pointer to node which is n spots after node, if there is
 * a valid node. Else it returns the value of the last node.
 */
listint_t *move_forward_n(listint_t *node, unsigned int n)
{
	listint_t *tmp;
	unsigned int i;

	if (!node)
		return (NULL);

	for (i = 0, tmp = node; i < n && tmp->next; i++)
		tmp = tmp->next;

	return (tmp);
}
