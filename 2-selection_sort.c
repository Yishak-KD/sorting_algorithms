#include "sort.h"
/**
 *selection_sort: sorts with array algorithm
 *@array: given array to be sorted
 *@size: the length of the given array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, c;
	int swap;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		c = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[c])
				c = j;

		}
		if (i != c)
		{
			swap = array[i];
			array[i] = array[c];
			array[c] = swap;
			print_array(array, size);
		}
	}

