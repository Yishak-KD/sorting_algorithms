#include "sort.h"

/**
 * swap_ints: a void function that swaps a given array/ character
 * @a: integer to swap.
 * @b: integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}


/**
 * bubble_sort: helps sort an array in an ascending way.
 * @array: array of integer to be sorted.
 * @size: size of the given array.
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t c, m;

	if (!array)
		return;

	for (m = 0; m < size - 1; m++)
	{
		for (c = 0; c < size - m - 1; c++)
		{
			if (array[c] > array[c + 1])
			{
				swap_ints(&array[c], &array[c + 1]);
				print_array(array, size);
			}
		}
	}
}
