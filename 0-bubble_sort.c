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
 * bubble_sort - sorts an array of integers in
 * ascending order, using the Bubble sort
 * algorithm. The array is printed each
 * time two elements are swapped
 * @array: The array
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	for (size_t x = 0; x < size - 1; x++)
	{
		for (size_t y = 0; y < size - x - 1; y++)
		{
			if (array[y] > array[y + 1])
			{
				swap_elem(&array[y], &array[y + 1]);
				print_array(array, size);
			}
		}
	}
}



