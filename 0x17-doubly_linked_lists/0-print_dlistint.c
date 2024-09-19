#include "lists.h"

/**
 * print_dlistint - Returns the number of nodes in a list
 * @h: The head node for traversing through the list
 *
 * Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
