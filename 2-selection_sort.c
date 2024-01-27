#include "sort.h"
/**
 * selection_sort - sort arrays by selection sorting method
 * @array: the array to be sorted
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, z;
	int tmp;

	if (array || !size)
		return;
	for (i = 0; i < size - 1; i++)
	{
		for (j = size - 1, z = i + 1; j > i; j--)
		{
			if (array[j] < array[z])
				z = j;
		}
		if (array[i] > array[z])
		{
			tmp = array[i];
			array[i] = array[z];
			array[z] = tmp;
			print_array(array, size);
		}
	}
}
