#ifndef SEARCH_H
#define SEARCH_H

#include <stddef.h>

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;


int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int BinarySearch(int *array, unsigned int lo, unsigned int hi, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
listint_t *move_forward_n(listint_t *node, unsigned int n);


void free_list(listint_t *list);
listint_t *create_list(int *array, size_t size);
void print_list(const listint_t *list);

#endif
