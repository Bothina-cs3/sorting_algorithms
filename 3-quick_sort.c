#include "sort.h"
/**
 * quick_sort - a function that sorts an array of integers
 * in ascending order using the Quick sort algorithm
 * @array: the array to sort
 * @size: the size of array
 * Return: void
*/

void quick_sort(int *array, size_t size)
{
	if (!array || !size)
		return;

	_Quicksort(array, size, 0, size -1);
}
