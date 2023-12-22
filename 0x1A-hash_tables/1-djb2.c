#include "hash_tables.h"

/**
* hash_djb2 - Implements the djb2 hash algorithm
* @str: The input string
*
* Return: The computed hash value
*/
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;

	int c;

	hash = 5381; /* Initial hash value */

	while ((c = *str++)) /* Iterate over each character in the string */
	{
		/* Update hash using the djb2 algorithm: hash * 33 + c */
		hash = ((hash << 5) + hash) + c;
	}

	return (hash);
}
