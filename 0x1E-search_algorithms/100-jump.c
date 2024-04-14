#include <math.h>
#include <stdio.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where value is located, or -1 if not found or array is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
    size_t jump, prev, step, i;

    if (array == NULL) {
        return -1;
    }

    jump = (size_t) sqrt(size);
    prev = 0;
    step = jump;

    /* Finding the block where the element is present */
    while (step < size && array[step] < value) {
        printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
        prev = step;
        step += jump;
    }

    printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
    printf("Value found between indexes [%lu] and [%lu]\n", prev, step);

    /* Linear search for value in the block beginning with prev */
    step = step < size ? step : size;
    for (i = prev; i < step; i++) {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value) {
            return (int)i;
        }
    }

    /* If element is not found */
    return -1;
}