#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
    size_t count = 0;
    listint_t *temp, *current = *h;

    while (current)
    {
        if (*h - current > 0) /* Compare the pointers */
        {
            temp = current->next; /* Store the next node */
            free(current);
            current = temp;
            count++;
        }
        else
        {
            free(current);
            current = NULL;
            count++;
            break;
        }
    }

    *h = NULL;

    return count;
}

