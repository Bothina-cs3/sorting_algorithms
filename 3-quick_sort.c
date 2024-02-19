#include "sort.h"
/**
 * _swap - a function Swaps tow int
 * @c: address of first int
 * @d: address of second int
 * Return: void
*/

void _swap(int *c, int *d)
{
	int tmp;

	tmp = *c;
	*c = *d;
	*d = tmp;
}

/**
 * Lomuto_partition - a function the array using
 * the Lomuto partition scheme.
 * @array: the array to sort
 * @size: the size of array
 * @st: the start index of the sort
 * @nd: the end index of the sort
 * Return: index the pivot
*/
int Lomuto_partition(int *array, size_t size, int st, int nd)
{
	int i, j;
	int pivot = array[nd];

	for (i = j = st; j < nd; j++)
	{
		if (array[j] < pivot)
		{
			_swap(&array[i++], &array[j]);
			print_array(array, size);
		}
	}
	_swap(&array[i], &array[nd]);
	print_array(array, size);
	return (i);
}

/**
 * _Quicksort - a function Quicksort using the Lomuto
 * partition scheme.
 * @array: the array to sort
 * @size: the size of array
 * @st: the start index of the sort
 * @nd: the end index of the sort
 */

void _Quicksort(int *array, size_t size, int st, int nd)
{
	int pivot;

	if (st < nd)
	{
		pivot = Lomuto_partition(array, size, st, nd);

		_Quicksort(array, size, st, pivot - 1);
		_Quicksort(array, size, pivot + 1, nd);
	}
}

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

	_Quicksort(array, size, 0, size - 1);
}
