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
    size_t i = 0;
    size_t j = 0;
    long int store;

    if (array)
    {
        for (; i < size; i++)
        {
            j = 0;
            for (; j < size; j++)
            {
                if ((array[j] > array[j+1]) & (j+1 < size))
                {
                    store = array[j];
                    array[j] = array[j+1];
                    array[j+1] = store;
                    print_array(array, size);
                }
            }
        }
    }
}
