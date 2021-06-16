#ifndef SORT_H
#define SORT_H

#include <stdio.h>
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

listint_t *create_listint(const int *array, size_t size);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
int lomuto_partition(int *array, int low, int high, size_t size);
void sort(int *array, int low, int high, size_t size);
void swap_value(int *x_value, int *y_value);

/* Includes prototipes functions */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

#endif /* SORT_H */
