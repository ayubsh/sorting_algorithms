#include "sort.h"

/**
 * insertion_sort_list - sort double linked list using insertion sort algorithm
 * @list: ptr to double linked to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr;

	if (list == NULL || (*list)->next == NULL)
	{
		return;
	}

	curr = (*list)->next;

	while (curr)
	{
		while (curr->prev && curr->prev->n > curr->n)
		{
			curr = swap(curr, list);
			print_list(*list);
		}
		curr = curr->next;
	}
}


/**
 * swap - swap elements in linked list
 * @s: element to be swapped
 * @list: ptr to doubly linked list
 * Return: returns list with element swapped
 */
listint_t *swap(listint_t *s, listint_t **list)
{
	listint_t *tmp = s->prev, *curr = s;
	/*NULL, 19, 48, 9, 71, 13, NULL*/

	tmp->next = curr->next;
	if (curr->next)
		curr->next->prev = tmp;
	curr->next = tmp;
	curr->prev = tmp->prev;
	tmp->prev = curr;
	if (curr->prev)
		curr->prev->next = curr;
	else
		*list = curr;
	return (curr);
}
