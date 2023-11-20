#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - Addds a new node at the end of a list_t list.
 * @head: A pointer to the head of the list_t list
 * @str: THe string to be addded to the list_t list.
 *
 * Return: If the function fails - NULL.
 * Otherwise - the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *temp;
	int length;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	temp = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (length = 0; str[length];)
		length++;

	new->str = temp;
	new->len = length;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
