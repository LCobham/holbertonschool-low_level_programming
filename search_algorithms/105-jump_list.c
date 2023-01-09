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
	int root = sqrt(size), index = root;

	if (!list)
		return (NULL);

	left = list;
	right = move_forward_n(list, root);

	while (right && right->n < value && index < (int) size)
	{
		printf("Value checked at index [%d] = [%d]\n", index, right->n);
		left = right;
		right = move_forward_n(right, root);
		index += root;
	}
	if (right)
		printf("Value checked at index [%d] = [%d]\n", index, right->n);
	printf("Value found between indexes [%d] and [%d]\n", index - root, index);
	index -= root;
	while (left != right)
	{
		printf("Value checked at index [%d] = [%d]\n", index, left->n);
		if (left->n == value)
			return (left);
		index++;
		left = left->next;
	}
	return (left);
}

/**
 * move_forward_n - move forward n spots in a linked list
 * @node: starting point
 * @n: number of positions forward to move
 *
 * Return: pointer to node which is n spots after node, or NULL
 */
listint_t *move_forward_n(listint_t *node, unsigned int n)
{
	listint_t *tmp;
	unsigned int i;

	if (!node)
		return (NULL);

	for (i = 0, tmp = node; i < n; i++)
		tmp = (tmp) ? tmp->next : NULL;

	return (tmp);
}
