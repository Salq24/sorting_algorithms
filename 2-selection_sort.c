#include "sort.h"

/**
 * swap_elem - swaps two elements in an array
 * @elem1: first element
 * @elem2: second element
 */

void swap_elem(int *elem1, int *elem2)
{
        int other = *elem1;
        *elem1 = *elem2;
        *elem2 = other;
}

/**
 * selection_sort - sorts an array of int
 * in an ascending order, using the selection alg
 * @array: the array
 * @size: array size
 */

void selection_sort(int *array, size_t size)
{
	size_t x, y;
	int *smallest;

	if (!array || !size)
		return;
	for (x = 0; x < size - 1; x++)
	{
		smallest = array + x;
		for (y = x + 1; y < size; y++)
		       smallest = (array[y] < *smallest) ? (array + y) : smallest;
		if ((array + x) != smallest)
		{
		swap_elem(array + x, smallest);
		print_array(array, size);
		}
	}
}	
