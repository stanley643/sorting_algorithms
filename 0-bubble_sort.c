#include "sort.h"
/**
 * bubble_sort - function that sorts the items
 * 
 * array: items to be sorted
 * size: the size of the array
 * Return: 0
 */

vord bubble_sort(int *array, size_t size)
{
	int step;
	int temp;
	int i;

	for (step = 0; step < size - 1; ++step)
	{
		for(i = 0; i < size - step - 1; ++1)
		{
			if(array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
			}
		}
	}
}
