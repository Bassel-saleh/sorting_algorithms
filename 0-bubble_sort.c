#include "sort.h"
/**
 * bubble_s - sorts an array using bubble sort
 * @array: array to be sorted
 * @size: size of array
 */
void bubble_s(int *array, size_t size)
{
	int tmp;
	size_t i, j;

	if (!array || !size)
		return;
	i = 0;
	while (i < size)
	{
		for (j = 0; k < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[k + 1] = tmp;
				print_array(array, size)
			}
		}
		i++;
	}
}
