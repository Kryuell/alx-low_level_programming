#include "lists.h"

/**
* add_dnodeint_end - Adds a new node at the end of a double linked list.
* @head: Pointer to a pointer of the head node.
* @n: Integer, data for the new node.
*
* Return: Pointer to the new node or NULL on failure.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *currentNode;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;

	if (!*head)
	{
		*head = newNode;
		return (newNode);
	}

	currentNode = *head;
	while (currentNode->next)
		currentNode = currentNode->next;

	currentNode->next = newNode;
	newNode->prev = currentNode;

	return (newNode);
}
