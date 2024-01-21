#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers in ascending order.
 * @array: an array of unsorted elements.
 * @size: size of an array.
 */
void bubble_sort(int *array, size_t size)
{
	int t;
	size_t i, j;

	if (array == NULL || size == 0)
	{
		return;
	}
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				t = array[j];
				array[j] = array[j + 1];
				array[j + 1] = t;
				print_array(array, size);
			}
		}
	}
}

