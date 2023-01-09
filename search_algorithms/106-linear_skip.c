#include "search_algos.h"
#include <stdio.h>

/**
 * linear_skip - search for a value in a sorted skip list
 * @list: pinter to head of linked list with express lane
 * @value: value being searched for
 *
 * Return: pointer to node in which value was found, or NULL otherwise
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *left, *right;

	if (!list)
		return (NULL);

	for (left = list, right = list->express; right;
			left = right, right = right->express)
	{
		printf("Value checked at index [%ld] = [%d]\n", right->index, right->n);
		if (right->n >= value)
			break;
	}
	right = (right) ? right : get_tail(left);
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
 * get_tail - get the tail of a skip list
 * @node: a node of the skip list
 *
 * Return: tail of skip list
 */
skiplist_t *get_tail(skiplist_t *node)
{
	skiplist_t *tmp;

	if (!node)
		return (NULL);

	tmp = node;
	while (tmp->express)
		tmp = tmp->express;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}
