#include "lists.h"

/**
 * dlistint_len - Prints the number of elements in the list
 * @h: Node for accessing each of the elements
 *
 * Return: Number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
