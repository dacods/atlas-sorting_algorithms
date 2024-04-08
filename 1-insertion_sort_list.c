#include "sort.h"

/**
 * insertion_sort_list - Function that sorts using insertion
 * @lsit: list of elements
 * Return: 0 
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp, *check;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
		temp = current->next;
		check = current->prev;

		while (check != NULL && check->n > current->n)
		{
			check->next = current->next;
			if (current->next != NULL)
				current->next->prev = check;

			current->next = check;
			current->prev = check->prev;
			check->prev = current;
			
			if (current->prev != NULL)
				current->prev->next = current;
			else
				*list = current;

			check = current->prev;
			print_list(*list);
		}
		current = temp;
	}
}
