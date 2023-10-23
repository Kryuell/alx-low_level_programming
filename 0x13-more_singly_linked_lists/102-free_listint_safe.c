#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: A pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *next;
	size_t size = 0;

	current = *h;

	while (current != NULL)
	{
	size++;

	if (current < current->next)
	{
	printf("[%p] %d\n", (void *)current, current->n);
	free(current);
	break;
	}

	printf("[%p] %d\n", (void *)current, current->n);
	next = current->next;
	free(current);
	current = next;
	}

	*h = NULL;
	return (size);
}
