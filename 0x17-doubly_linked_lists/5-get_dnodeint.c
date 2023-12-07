#include "lists.h"

/**
* get_dnodeint_at_index - Returns the nth node of a double linked list.
* @head: Pointer to the head node.
* @index: Unsigned integer, node position to return.
*
* Return: Pointer to the dlistint_t at the nth node, or NULL if none.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;

	while (head && n < index)
	{
		head = head->next;
		n++;
	}

	return (head);
}
