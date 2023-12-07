#include "lists.h"

/**
* insert_dnodeint_at_index - Inserts a new node at a given position.
* @h: Pointer to a pointer of the head node.
* @idx: Index where the new node should be added. Index starts at 0.
* @n: Integer, data for the new node.
*
* Return: Pointer to the new node, or NULL if it failed.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *currentNode;
	unsigned int i = 0;

	if (!h)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *h;
		if (*h)
			(*h)->prev = newNode;
		*h = newNode;
		return (newNode);
	}
	currentNode = *h;
	while (currentNode && i < idx - 1)
	{
		currentNode = currentNode->next;
		i++;
	}
	if (!currentNode)
	{
		free(newNode);
		return (NULL);
	}
	newNode->next = currentNode->next;
	newNode->prev = currentNode;
	if (currentNode->next)
		currentNode->next->prev = newNode;
	currentNode->next = newNode;

	return (newNode);
}
