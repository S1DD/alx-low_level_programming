#include "lists.h"

/**
 * add_dnodeint - Inserts a new node at the beginning of a list
 * @head: A pointer to a pointer that points to the beginning of the list
 * @n: The value that will be held by the new node
 *
 * Return: Address of the new element or null if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newEl;

	newEl = malloc(sizeof(dlistint_t));

	if (newEl == NULL)
		return (NULL);

	newEl->n = n;
	newEl->prev = NULL;
	newEl->next = *head;

	if (*head != NULL)
		(*head)->prev = newEl;
	*head = newEl;

	return (newEl);
}
