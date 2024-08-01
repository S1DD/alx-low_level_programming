#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: head of the linked list
 * Return: No return
 */

void free_list(list_t *head)
{
	list_t *current_node;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}
