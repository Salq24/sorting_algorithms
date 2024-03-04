#include "sort.h"

/**
 * node_swp - swaps two nodes of a doubly linked list
 * @nd1: first node
 * @nd2: node 2
 */

void node_swp(listint_t *nd1, listint_t *nd2)
{

	if (nd1->prev)
		nd1->prev->next = nd2;
	if (nd2->next)
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
	listint_t *curr, *inst;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	curr = (*list)->next;
	while (curr)
	{
		inst = curr;

		curr = inst->next;

		while (inst != NULL && inst->prev)
		{
			if (inst->prev->n > inst->n)
			{
				node_swp(inst->prev, inst);
				if (!inst->prev)
					*list = inst;
			print_list((const listint_t *)*list);
			}
			else
				inst = inst->prev;
		}
	}
}
