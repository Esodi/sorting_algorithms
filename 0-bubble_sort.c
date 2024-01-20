#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers in ascending order.
 * @array: an array of unsorted elements.
 * @size: size of an array.
 */
void bubble_sort(int *array, size_t size)
{
	int t;
	size_t _i, i, j;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_i = i;
			if (array[j] > array[_i])
			{
				t = array[_i];
				array[_i] = array[j];
				array[j] = t;
				print_array(array, size);
			}
			else
			{
				_i = j;
			}
		}
	}
}
