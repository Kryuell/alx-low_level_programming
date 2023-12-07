#include "lists.h"

/**
* delete_dnodeint_at_index - deletes the node at index index
* of a dlistint_t linked list.
* @head: double pointer to the head of the list
* @index: index of the node to delete, starting from 0
*
* Return: 1 if succeeded, -1 if failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		if (current->next != NULL)
			current->next->prev = NULL;

		*head = current->next;
		free(current);
		return (1);
	}

	while (i < index && current != NULL)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (-1);

	if (current->next != NULL)
		current->next->prev = current->prev;

	if (current->prev != NULL)
		current->prev->next = current->next;

	free(current);

	return (1);
}
