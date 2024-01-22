#include "sort.h"

/**
 * insertion_sort_list - sorts a linked list of integers in ascending order.
 * @list: A doubly linked list.
 */
void insertion_sort_list(listint_t **list)
{
	const listint_t *tmp;
	const int t;

	while (tmp != NULL)
	{
		if (tmp->n > tmp->next->n)
		{
			t = tmp->n;
			tmp->n = tmp->next->n;
			tmp->next->n = t;
			print_list(*list);
		}
	}
}

