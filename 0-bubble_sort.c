#include "sort.h"
/**
 * bubble_sort - function that sorts the items
 *
 * @array: items to be sorted
 * @size: the size of the array
 * Return: 0
 */

void bubble_sort(int *array, size_t size)
{
	size_t step;
	int temp;
	size_t i;
	bool swapped;

	for (step = 0; step < size - 1; ++step)
	{
		swapped = false;

		for (i = 0; i < size - step - 1; ++i)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				swapped = true;
				print_array(array, size);
			}
		}
		if (swapped == false)
			break;
	}
}
