#ifndef SORT_H
#define SORT_H
#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
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

void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void swap(int *arr, int i, int j, int size);
void bubble_sort(int arr[], int size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);

#endif
