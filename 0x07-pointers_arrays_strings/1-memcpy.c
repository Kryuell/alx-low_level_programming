#include "main.h"
/**
 * _memcpy - Entry point
 * @dest: pointer of buffer
 * @src: pointer of buffer2
 * @n: param of int
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}
	return (dest);
}
