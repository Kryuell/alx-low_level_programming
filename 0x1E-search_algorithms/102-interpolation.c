#include "search_algos.h"
#include <stdio.h>

/**
* interpolation_search - Searches for a value using the Interpolation search
* @array: A pointer to the first element of the array to search in
* @size: The number of elements in the array
* @value: The value to search for
*
* Return: The first index where value is located, or -1 on failure
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;

	if (array == NULL)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		/* Avoid division by zero */
		if (low == high)
		{
			if (array[low] == value)
				return (low);
			break;
		}

		/* Calculate the probe position */
		pos = low + (((double)(high - low) /
			(array[high] - array[low])) * (value - array[low]));

		/* Check if the position is within the array bounds */
		if (pos >= size)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return ((int)pos); /* Value found */

		if (array[pos] < value)
			low = pos + 1; /* Value is in upper part of the range */
		else
			high = pos - 1; /* Value is in lower part of the range */
	}

	return (-1); /* Value not found */
}
