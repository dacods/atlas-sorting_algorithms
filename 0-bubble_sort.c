#include "sort.h"

/**
 * swap - Swap for bubble sort function
 * @a: integer
 * @b: integer
 * Return: 0
 */

void swap(int *arr, int i, int j)
{
	int k;
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
	for (k = 0; k < 10; k++)
	{
		printf("%d", arr[k]);
		if (k < 9)
			printf(", ");
	}
	printf("\n");
}

/**
 * bubble_sort - Function that sorts an array of integers
 * @arr: array
 * @n: integer
 * Return: 0
 */

void bubble_sort(int arr[], int n)
{
	int i, j;

	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr, j, j + 1);
			}
		}
	}
}
