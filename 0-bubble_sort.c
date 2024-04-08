#include "sort.h"

/**
 * swap - Swap for bubble sort function
 * @arr: array
 * @i: integer
 * @j: integer
 * @size: Number of integers to sort
 * Return: 0
 */

void swap(int *arr, int i, int j, int size)
{
	int k;
	int temp = arr[i];

	arr[i] = arr[j];
	arr[j] = temp;
	for (k = 0; k < size; k++)
	{
		printf("%d", arr[k]);
		if (k < size - 1)
			printf(", ");
	}
	printf("\n");
}

/**
 * bubble_sort - Function that sorts an array of integers
 * @arr: array
 * @size: Number of integers to sort
 * Return: 0
 */

void bubble_sort(int arr[], int size)
{
	int i, j;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr, j, j + 1, size);
			}
		}
	}
}
