#include "lists.h"

/**
 * dlistint_len - Prints the number of elements in the list
 * @h: Node for accessing each of the elements
 *
 * Return: Number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *curr;
	int n;

	curr = h;
	n = 0;

	while (curr != NULL)
	{
		curr = curr->next;
		n++;
	}

	return (n);
}
