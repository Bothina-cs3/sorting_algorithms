#include "sort.h"
/**
 *  insertion_sort_list - function that sorts a doubly linked list of
 * integers in ascending order using the Insertion sort algorithm
 * @list: address of pointer to head
 *
 * Return: void
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *tmp, *i;

	if (!list || !*list || !(*list)->next)
		return;

	for (i = (*list)->next; i != NULL; i = i->next)
	{
		tmp = i;
		while (tmp->prev != NULL && tmp->n < tmp->prev->n)
		{
			tmp->prev->next = tmp->next;

			if (tmp->next != NULL)
			{
				tmp->next->prev = tmp->prev;
				tmp->next = tmp->prev;
				tmp->prev = tmp->prev->prev;
				tmp->next->prev = tmp;
			}

			if (tmp->prev != NULL)
			{
				tmp->prev->next = tmp;
			}

			else
			{
				*list = tmp;
			}
		}
		print_list((const listint_t *) *list);
	}
}
