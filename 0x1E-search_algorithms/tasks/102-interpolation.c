#include <stdio.h> /* Include the standard I/O header */

/**
 * interpolation_search - a Function that ...
 * @array: Description of array.
 * @size: Description of size.
 * @value: Description of value.
 * Return: Description of the return value.
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
		pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

		/* Check if the position is within the array bounds */
		if (pos >= size)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (int)pos; /* Value found */

		if (array[pos] < value)
			low = pos + 1; /* Value is in the upper part of the range */
		else
			high = pos - 1; /* Value is in the lower part of the range */
	}

	return (-1); /* Value not found */
}

