#include "lists.h"

/**
* add_dnodeint - Adds a new node at the beginning of a double linked list.
* @head: Head node.
* @n: Data for the new node.
*
* Return: Address of the new node or NULL on failure.
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	newNode->next = *head;
	(*head)->prev = newNode;
	*head = newNode;

	return (newNode);
}
