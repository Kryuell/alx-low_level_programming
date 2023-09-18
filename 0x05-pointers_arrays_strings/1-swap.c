#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 */
void swap_int(int *a, int *b)
{
	int temp;

    /* Store the value of a in temp */
	temp = *a;

    /* Assign the value of b to a */
	*a = *b;

    /* Assign the value of temp (original a) to b */
	*b = temp;
}
