#include "sort.h"

/**
 * selection_sort - sorts array using selectionsort
 * @array: array to be sorted
 * @size: length of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, minIndex;
	int min, tmp;

	if (array == NULL || size < 2)
	{
		return;
	}

	for (i = 0; i < size - 1; i++)
	{
		min = array[i];
		minIndex = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < min)
			{
				min = array[j];
				minIndex = j;
			}
		}
		if (minIndex != i)
		{
			tmp = array[i];
			array[i] = array[minIndex];
			array[minIndex] = tmp;
			print_array(array, size);
		}
	}
}
