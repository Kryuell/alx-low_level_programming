#include "main.h"
/**
 * *_strcat - Entry point
 * @dest: char param
 * @src: char param
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i++] = src[j];
		j++;
	}
	return (dest);
}
