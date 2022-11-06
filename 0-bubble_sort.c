#include "sort.h"

/**
 * bubble_sort - impliments bubble sort algorithm
 * @array: array to be sorted
 * @size: size of the array to be sorted
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{

			if (array[j + 1] < array[j])
			{
				tmp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
		}
	}
}
