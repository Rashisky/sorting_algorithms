#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * using the "Selection algorithm"
 * @array: array list to be sorted
 * @size: size of the array
 *
 * Return: void
*/
void selection_sort(int *array, size_t size)
{
	size_t count, track, idx = 0;

	if (array)
	{
		while (idx < size) /*replace size*/
		{
			track = idx;
			for (count = track; count < size; count++)
			{
				if (array[track] > array[count])
					track = count;
			}
			if (array[idx] > array[track])
			{
				swap(array, idx, track);
				print_array(array, size);
			}
			idx++;
		}
	}
}

/**
 * swap - Interchange the given two values
 * @array: array list
 * @i: index position of high_val in the list
 * @j: index position of low_val in the list
*/
void swap(int *array, size_t i, size_t j)
{
	long int store;

	store = array[i];
	array[i] = array[j];
	array[j] = store;
}
