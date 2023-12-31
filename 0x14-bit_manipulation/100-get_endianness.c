#include "main.h"

/**
 * get_endianness - Check the endianness of the system
 *
 * Return: 0 if the system is big endian, 1 if it's little endian.
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *byte = (char *)&num;

    /* If the first byte is 1, it's little endian. and, it's big endian. */
	return (*byte);
}

