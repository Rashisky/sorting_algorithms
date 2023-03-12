#include "sort.h"

/**
* bubble_sort - sorts an array of integers in ascending order
* using "Bubble sort" algorithm
* @array: array of the file to be sorted
* @size: size of the array
*
* Description: print the array after each time you swap two elements
*/

void bubble_sort(int *array, size_t size)
{
	size_t i = 0,  len = size, j, count = 0;

	if (array)
	{
		for (; i < size; i++)
		{
			count = 0;
			for (j = 0; j < len; j++)
			{
				if (array[count] > array[j])
				{
					swap(array, count, j);
					print_array(array, size);
				}
				count = j;
			}
			len--;
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
