#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

size_t free_listint_safe(listint_t **h)
{
    listint_t *current, *next;
    size_t size = 0;
    int loop_detected = 0;

    current = *h;

    while (current != NULL)
    {
        size++;

        next = current->next; /* Store the next node before freeing current */

        /* Detect a loop using pointer comparison */
        if (current >= next)
        {
            printf("[%p] %d\n", (void *)current, current->n);
            free(current);
            loop_detected = 1;
            break;
        }

        printf("[%p] %d\n", (void *)current, current->n);
        free(current);
        current = next;
    }

    *h = NULL;

    if (loop_detected) {
        return size;
    } else {
        return 0; /* No loop detected, return 0 */
    }
}
