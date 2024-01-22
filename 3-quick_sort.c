#include "sort.h"

/**
* quick_sort - Sorts an array of integers in ascending order using
*              the Quick sort algorithm with Lomuto partition scheme.
* @array: The array to be sorted.
* @size: The size of the array.
*/

void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;

	recursive_quick_sort(array, 0, size - 1, size);
}

/**
* recursive_quick_sort - Recursively sorts the array using Quick sort.
* @array: The array to be sorted.
* @low: The low index of the partition.
* @high: The high index of the partition.
* @size: The size of the array (for printing purposes).
*/

void recursive_quick_sort(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		int pivot_index = lomuto_partition(array, low, high, size);

		recursive_quick_sort(array, low, pivot_index - 1, size);
		recursive_quick_sort(array, pivot_index + 1, high, size);
	}
}

/**
* lomuto_partition - Implements the Lomuto partition scheme for Quick sort.
* @array: The array to be partitioned.
* @low: The starting index of the partition.
* @high: The ending index of the partition.
* @size: The size of the array (for printing purposes).
* Return: The index of the pivot.
*/
int lomuto_partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];

	int i = low - 1;

	int j = low;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}

	if (i + 1 != high)
	{
		swap(&array[i + 1], &array[high]);
		print_array(array, size);
	}

	return (i + 1);
}

/**
* swap - Swaps the values of two integers.
* @a: Pointer to the first integer.
* @b: Pointer to the second integer.
*/
void swap(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
