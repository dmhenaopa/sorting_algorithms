#include "sort.h"
/**
 * swap_node - swap nodes of the structure
 *
 * @node_b: node b to change
 * @node_c: node c to change
 * @list: list to make the swap
 */

void swap_node(listint_t *node_b, listint_t *node_c, listint_t **list)
{
	listint_t *node_a, *node_d;

	if (node_b == NULL || node_c == NULL)
		return;

	/* Verify that point somewhere */
	node_a = node_b->prev;
	node_d = node_c->next;

	if (node_a != NULL)
		node_a->next = node_c; /* Valid if it exists */

	node_c->next = node_b; /* We changed the Next. */
	node_b->next = node_d;

	if (node_d != NULL) /* We assign the previous ones */
		node_d->prev = node_b;

	/* We assign the previous ones */
	node_b->prev = node_c;
	node_c->prev = node_a;

	if (node_b == *list)
		*list = node_c;
}

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 *
 * @list: double linked list to order and insert the node
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *next_node, *prev_node;

	if (!list || !*list || !(*list)->next)
		return;

	next_node = (*list);

	while (next_node != NULL)
	{
		prev_node = next_node;
		while (prev_node->prev != NULL && prev_node->n < prev_node->prev->n)
		{
			swap_node(prev_node->prev, prev_node, list);
			print_list(*list);
		}
		next_node = next_node->next;
	}
}
