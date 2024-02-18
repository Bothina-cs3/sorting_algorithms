#include "sort.h"
/**
 * selection_sort - function that sorts an array of integers
 * in ascending order using the Selection sort algorithm
 * @array: array of list
 * @size: size of array
 * Return: void
*/

void selection_sort(int *array, size_t size)
{
	int tmp;
	size_t i, j, index;

	if (!array || size < 2)
		return;

	i = 0;
	while (i < size - 1)
	{
		index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[index])
				index = j;
		}

		if (index != i)
		{
			tmp = array[i];
			array[i] = array[index];
			array[index] = tmp;
			print_array(array, size);
		}

		i++;
	}
}
