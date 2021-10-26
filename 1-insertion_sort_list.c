#include "sort.h"

/**
 *insertion_sort_list: helps us sort the doubly linked list in an ascending way.
 *@list: points to the head of list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *insert_node, *next_insert;

	if (list == NULL || *list == NULL)
		return;
	insert_node = (*list)->next;
	while (insert_node != NULL)
	{
		next_insert = insert_node->next;
		while (insert_node->prev != NULL && insert_node->prev->n > insert_node->n)
		{
			insert_node->prev->next = insert_node->next;
			if (insert_node->next != NULL)
				insert_node->next->prev = insert_node->prev;
			insert_node->next = insert_node->prev;
			insert_node->prev = insert_node->next->prev;
			insert_node->next->prev = insert_node;
			if (insert_node->prev == NULL)
				*list = insert_node;
			else
				insert_node->prev->next = insert_node;
			print_list(*list);
		}
		insert_node = next_insert;
	}
}
