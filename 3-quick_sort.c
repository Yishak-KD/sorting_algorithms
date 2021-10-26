#include "sort.h"
#include <stdio.h>

/**
 * partition: get partition for the quicksort
 * @array: array to be sorted
 * @lo: lowest index of the partition
 * @hi: highest index of the partition
 * @size: size of an array
 *
 * Return: index of the partition
 */
size_t partition(int *array, ssize_t lo, ssize_t hi, size_t size)
{
	ssize_t i, j;
	int swap, m;

	m = array[hi];
	i = lo - 1;
	for (j = lo; j < hi; j++)
	{
		if (array[j] < m)
		{
			i++;
			if (i != j)
			{
				swap = array[i];
				array[i] = array[j];
				array[j] = swap;
				print_array(array, size);
			}
		}
	}
	if (array[hi] < array[i + 1])
	{
		swap = array[i + 1];
		array[i + 1] = array[hi];
		array[hi] = swap;
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * partition: get partition for the quicksort
 * @array: array to be sorted
 * @lo: lowest index of the partition
 * @hi: highest index of the partition
 * @size: size of an array
 *
 * Return: void
 */
void quicksort(int *array, ssize_t lo, ssize_t hi, size_t size)
{
	ssize_t m;

	if (lo < hi)
	{
		m = partition(array, lo, hi, size);
		quicksort(array, lo, m - 1, size);
		quicksort(array, m + 1, hi, size);

	}
}

/**
 * quick_sort: sorts an array in an ascending order
 * @array: array to be sorted
 * @size: size of an array
 *
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quicksort(array, 0, size - 1, size);
}

