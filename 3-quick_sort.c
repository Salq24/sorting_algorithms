#include "sort.h"

/**
 * swap_el - swaps two elements in an array
 * @array: array
 * @size: size of array
 * @elem1: first element
 * @elem2: second element
 */

void swap_el(int *array, size_t size, int *elem1, int *elem2)
{
	if (*elem1 != *elem2)
	{
		*elem1 = *elem1 + *elem2;
		*elem2 = *elem1 - *elem2;
		*elem1 = *elem1 - *elem2;
		print_array((const int *)array, size);
	}
}

/**
 * lom_partition - The partition scheme used
 * @array: array
 * @size: array size
 * @low: range low index
 * @high: range hogh index
 */

size_t lom_partition(int *array, size_t size, ssize_t low, ssize_t high)
{
	int x, y, piv = array[high];

	for (x = y = low; y < high; y++)
		if (array[y] < piv)
			swap_el(array, size, &array[y], &array[x++]);
	swap_el(array, size, &array[x], &array[high]);
	return (x);
}
/**
 * quick_sort_lom - sorts using lomuto scheme
 * @array: array
 * @size: size of array
 * @low: range low index
 * @high: range high index
 */

void quick_sort_lom(int *array, size_t size, ssize_t low, ssize_t high)
{
	if (low < high)
	{
		size_t z = lom_partition(array, size, low, high);

		quick_sort_lom(array, size, low, z - 1);
		quick_sort_lom(array, size, z + 1, high);
	}
}

/**
 * quick_sort -  sorts an array of integers in ascending
 * order using the Quick sort algorithm
 * @array: array
 * @size: size of array
 */

void quick_sort(int *array, size_t size)
{
	if (!array || !size)
		return;
	quick_sort_lom(array, size, 0, size - 1);
}
