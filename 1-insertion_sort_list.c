#include "sort.h"

/**
 * insertion_sort_list - Function that sorts using insertion
 * @lsit: list of elements
 * Return: 0 
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp, *check, *print;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
		temp = current->next;
		check = current->prev;

		while (check != NULL && check->n > current->n)
			check = check->prev;

		if (check == NULL)
		{
			current->prev->next = current->next;
			if (current->next != NULL)
				current->next->prev = current->prev;

			current->prev = NULL;
			current->next = *list;
			(*list)->prev = current;
			*list = current;
		}
		else if (check->next != current)
		{
			current->prev->next = current->next;
			if (current->next != NULL)
				current->next->prev = current->prev;
			current->next = check->next;
			current->prev = check;
			check->next->prev = current;
			check->next = current;
		}
		current = temp;

		print = *list;
		while (print != NULL)
		{
			printf("%d", print->n);
			if (print->next != NULL)
				printf(", ");
			print = print->next;
		}
		printf("\n");
	}
}
