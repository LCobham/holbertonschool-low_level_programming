#include "lists.h"
#include <stdio.h>

/**
 * find_listint_loop - find loop in linked list
 * @head: head of linked list
 *
 * Return: pointer to where loop starts or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head, *fast = head;

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			for (slow = head; slow != fast; slow = slow->next, fast = fast->next)
				continue;
			return (fast);
		}
	}

	return (NULL);
}
