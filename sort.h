#ifndef __SORT__
#define __SORT__
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* MACROS */
#define FALSE 0
#define TRUE 1

/* TYPES */
typedef unsigned char BOOL;

/* SORT FUNCTIONS */
void bubble_sort(int *array, size_t size);

#endif
