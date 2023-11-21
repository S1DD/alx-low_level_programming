#include "lists.h"

/**
 * pop_listint - Deletes the head node od a listint_t linked list
 * and returns the head node's data(n).
 * @head: The pointer to the address of the listint_t list.
 *
 * Return: If the linked list is empy - 0
 * Otherwise - The head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int nVal;

	if (*head == NULL)
		return (0);

	temp = *head;
	nVal = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (nVal);
}
