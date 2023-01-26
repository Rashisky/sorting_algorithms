#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascening order
 * using the "Selection algorithm"
 * @array: array list to be sorted
 * @size: size of the array
 *
 * Return: void
*/
void selection_sort(int *array, size_t size)
{
	size_t count, track, idx = 0;
	long int val;
	int i = 1;

	if (array)
	{
		while (idx < size) /*replace size*/
		{
			track = idx;
			for (count = idx; count < size; count++)
			{
				if (array[idx] > array[count])
				{
					if (i && (array[track] > array[count]))
					{
						track = count;
						i = 0;
					}
					else if (!(i) && (array[track] > array[count]))
					{
						track = count;
						i = 1;
					}
				}
			}
			if (array[idx] > array[track])
			{
				val = array[track];
				array[track] = array[idx];
				array[idx] = val;
				print_array(array, size);
			}
			idx++;
		}
	}
}
