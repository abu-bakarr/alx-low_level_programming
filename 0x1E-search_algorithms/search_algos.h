#ifndef _SEARCH_ALGO_H_
#define _SEARCH_ALGO_H_

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Implementing linear search*/
int linear_search(int *array, size_t size, int value);
/* Implementing binary search*/
int binary_search(int *array, size_t size, int value);
/* Implementing Jump search*/
int jump_search(int *array, size_t size, int value);
/* Implementing interpolation search*/
int interpolation_search(int *array, size_t size, int value);
/* Implementing expontial search*/
int exponential_search(int *array, size_t size, int value);
/* Implementing advanced_binary search*/
int advanced_binary(int *array, size_t size, int value);

/**
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @arr: 
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

listint_t *jump_list(listint_t *list, size_t size, int value);


#endif
