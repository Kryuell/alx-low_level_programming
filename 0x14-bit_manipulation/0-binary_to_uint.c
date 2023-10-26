#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - Convert a binary string to an unsigned int
 * @b: Pointer to the binary string
 *
 * Return: The converted number, or 0 if there are non-binary characters
 *         or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
	return (0);

	while (b[i] != '\0')
	{
	if (b[i] == '0' || b[i] == '1')
	{
	result = result << 1;
	if (b[i] == '1')
	result = result | 1;
	}
	else
	return (0);

	i++;
	}

	return (result);
}
