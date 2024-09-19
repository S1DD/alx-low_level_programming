#include "lists.h"

/**
 * print_dlistint - Returns the number of nodes in a list
 * @h: The head node for traversing through the list
 *
 * Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *curr_node;
	int n;

	curr_node = h;
	n = 0;

	while (curr_node != NULL)
	{
		printf("%i\n", curr_node->n);
		curr_node = curr_node->next;
		n++;
	}

	return (n);
}
