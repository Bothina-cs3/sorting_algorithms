#include "sort.h"
/**
 * bubble_sort - function that sorts an array of integers
 * in ascending order using the Bubble sort algorithm
 * @array: array of list
 * @size: size of array
 * Return: void
*/

void bubble_sort(int *array, size_t size)
{
	size_t i, index;
	int tmp;

	if (array == NULL || !size)
		return;

	for (i = 0; i < size; i++)
	{
		for (index = 0; index < size - 1; index++)
		{
			if (array[index] > array[index + 1])
			{
				tmp = array[index];
				array[index] = array[index + 1];
				array[index + 1] = tmp;
				print_array(array, size);
			}
		}

	}
}
