#include "sort.h"

/**
 * Lomuto_partion - impl lomuto partion algortihm for quick sort
 * @array: the array to be partioned
 * @lo: starting index
 * @hi: ending index
 * @size: length of the array
 * Return: returns the position/index of the pivot
 */
int Lomuto_partion(int *array, int lo, int hi, size_t size)
{
	int pivot = array[hi];
	int i = lo;
	int tmp, j;

	for (j = lo; j < hi; j++)
	{
		if (array[j] < pivot)
		{

			if (array[i] != array[j])
			{
				tmp = array[j];
				array[j] = array[i];
				array[i] = tmp;
				print_array(array, size);
			}
			i++;
		}
	}
	if (array[i] != array[hi])
	{
		tmp = array[i];
		array[i] = array[hi];
		array[hi] = tmp;
		print_array(array, size);

	}
	return (i);
}

/**
 * quick_sort_recur - recursivly quick sorts an array using lomuto partion
 * @array: the array to be sorted
 * @lo: starting index
 * @hi: ending index
 * @size: length of the array
 */
void quick_sort_recur(int *array, int lo, int hi, size_t size)
{
	int i;

	if (lo < hi)
	{
		i = Lomuto_partion(array, lo, hi, size);
		quick_sort_recur(array, lo, i - 1, size);
		quick_sort_recur(array, i + 1, hi, size);
	}
}
/**
 * quick_sort - quickly sorts an array
 * @array: the array to be sorted
 * @size: length of the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
	{
		return;
	}
	quick_sort_recur(array, 0, size - 1, size);
}

