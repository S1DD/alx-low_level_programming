#include "lists.h"

/**
 * sum_listint - Calculates the sum of all data (n) of a list_t list.
 * @head: Pointer to the head of the listint_t list.
 *
 * Return: If the list is empty - 0
 * Otherwise - the sum of all the data
 */
int sum_listint(listint_t *head)
{
	int total = 0;
	int *nNodes;

	while (head)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}
