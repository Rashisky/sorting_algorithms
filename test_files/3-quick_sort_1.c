#include "sort.h"

/**
 * quick_sort - sorts an array of integers in ascending order using
 * the "Quick sort" algorithm
 * @array: array list to be sorted
 * @size: size of the array
*/
void quick_sort(int *array, size_t size)
{
	size_t i = 0;

	if (size < 2)
		return;

	while (i < size)
	{
		if (array[size - 1] < array[i])
		{
			printf("The value of size is: %ld\n", swap(array, size));
		}
		i++;
	}
}

long int swap(int *array, size_t size)
{
    size_t i = 0, count, k;
    int store, pivot;

    pivot = array[size - 1];
    while (i < size)
    {
        if (array[size - 1] < array[i])
        {
            count = i;
            k = i;
            while (count < size)
            {
                if (array[count] < array[k] && array[i] > array[count] && array[size - 1] == pivot)
                {
                    store = array[k];
                    array[k] = array[count];
                    array[count] = store;
                    if (array[count] != array[i])
                        k = count;
                }
                count++;
            }
        }
        i++;
    }
    return k;
}
