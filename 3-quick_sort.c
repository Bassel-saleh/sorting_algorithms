#include "sort.h"
/**
 * swp - swap to int values in an array
 * @array: the array to be moddified
 * @size: size of the array
 * @x: the 1st to be swapped
 * @y: the 2nd to be swapped
 */
void swp(int *array, size_t size, int *x, int *y)
{
	if (*x != *y)
	{
		*x = *x + *y;
		*y = *x - *y;
		*x = *x - *y;
		print_array((const int *)array, size);
	}
}

/**
 * lomutoPartition - use lomuto partition method in quick sorting
 * @array: the array to be moddified
 * @size: size of the array
 * @low: the low index of the array
 * @high: the high index of the array
 * Return: size_t
 */
size_t lomutoPartition(int *array, size_t size, ssize_t low, ssize_t high)
{
	int i, j, pivot;

	pivot = array[high];
	for (i = j = low; j < high; j++)
		if (array[j] < pivot)
			swp(array, size, &array[j], &array[i++]);
	swp(array, size, &array[i], &array[high]);
	return (i);
}

/**
 * quick_helper - helps quick sor function
 * @array: the array to be moddified
 * @size: size of the array
 * @low: the low index of the array
 * @high: the high index of the array
 */
void quick_helper(int *array, size_t size, ssize_t low, ssize_t high)
{
	if (low < high)
	{
		size_t so = lomutoPartition(array, size, low, high);

		quick_helper(array, size, low, so - 1);
		quick_helper(array, size, so + 1, high);
	}
}

/**
 * quick_sort - sort array using quick sort method
 * @array: the array to be sorted
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (!array || !size)
		return;
	quick_helper(array, size, 0, size - 1);
}
