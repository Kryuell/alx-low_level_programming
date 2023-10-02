#include "main.h"
/**
 * *_strncat - Entry point
 * @dest: char param
 * @src: char param
 * @n: int param
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i])
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i++] = src[j];
		j++;
	}
	return (dest);
}
