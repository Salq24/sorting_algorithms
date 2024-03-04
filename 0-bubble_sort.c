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
	m_bool chek = false;
	size_t x, y = size;

	if (array == NULL || size <= 1)
		return;

	while (chek == false)
	{
		chek = true;
		for (x = 0; x < y - 1; x++)
		{
			if (array[x] > array[x + 1])
			{
				swap_elem(array + 1, array + x + 1);
				print_array(array, size);
				chek = false;
			}
		}
		y--;
	}
}
