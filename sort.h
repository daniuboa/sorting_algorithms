#ifndef SORT_H
#define SORT_H

#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer.
 * @next: Pointer to the next element of the list.
 * @prev: Pointer to the previous element of the list.
 */

typedef struct listint_s
{
	const int n;
	struct list_s *prev;
	struct listint_s *next;
} listint_t;

void bubble_sort(int *array, size_t size);

#endif
