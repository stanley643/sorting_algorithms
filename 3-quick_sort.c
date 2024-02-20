#include "sort.h"
/**
 * swap - a swapping fxn
 * @a: first value
 * @b: second value
 */
void swap(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}

/**
 * partition - fxn to partition the list
 * @array: the list to be sorted 
 * @low: the list on left
 * @high: the list on ther right
 * @size: size of the list/array
 */

int partition(int *array, int low, int high, size_t size)
{
	int pivot, i, j;

	pivot = array[high];
	i = (low - 1);

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap(&array[i], &array[j]);
			print_array(array, size);
		}
	}
	swap(&array[i + 1], &array[high]);
	print_array(array, size);
	return (i + 1);
}


/**
 * quickSort - fxn
 * @array: list to be sorted
 * @low: the list on the left
 * @high: the list on the right
 * @size: size of the list/array
 */
void quickSort(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		int pi;

		pi = partition(array, low, high, size);

		quickSort(array, low, pi - 1, size);
		quickSort(array, pi + 1, high, size);
	}
}
/**
 * quick_sort - the sorting fxn
 * @array: the list to be sorted
 * @size: the size of the array
 */
void quick_sort(int *array, size_t size)
{
	quickSort(array, 0, size - 1, size);
}
