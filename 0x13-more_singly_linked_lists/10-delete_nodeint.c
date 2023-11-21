#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a given index in a listint_t
 * @head: The pointer to the address of the head of the listint_t list.
 * @index: The index of the node to be deleted
 *
 * Return: Success - 1
 * Fail - -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *cpy = *head;
	unsigned int node;

	if (cpy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(cpy);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (cpy->next == NULL)
			return (-1);
		cpy = cpy->next;
	}

	temp = cpy->next;
	cpy->next = temp->next;
	free(temp);
	return (1);
}
