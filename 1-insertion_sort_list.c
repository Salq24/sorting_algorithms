#import "sort.h"

/**
 * node_swp - swaps two nodes of a doubly linked list
 * @hd: pointer to the head
 * @nd1: first node
 * @nd2: node 2
 */

void node_swp(listint_t **hd, listint_t *nd1, listint_t *nd2)
{
	if (nd1 == nd2)
		return;

	if (nd1->prev != NULL)
		nd1->prev->next = nd1;
	else
		*hd = nd2;

	if (nd2->next != NULL)
		nd2->next->prev = nd1;

	nd1->next = nd2->next;
	nd2->prev = nd1->prev;
	nd1->prev = nd2;
	nd2->next = nd1;
}

/**
 * insertion_sort_list - sorts a doubly linked list of
 * integers in ascending order using the Insertion sort
 * algorithm
 * @list: list of ints
 */

void insertion_sort_list(listint_t **list)
{
	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	listint_t *curr, *inst, *temp;

	for (curr = (*list)->next; curr != NULL; curr = temp)
	{
		temp = current->next;

		inst = curr->prev;

		while (inst != NULL && curr->n < inst->n)
		{
			node_swap(list, &inst, curr);
			print_list(*list);
		}
	}
}

