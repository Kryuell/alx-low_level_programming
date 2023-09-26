#include "main.h"
/**
* _memset - Entry point
* @s: pointer of b
* @b: param of char
* @n: param of int
* Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	s[i] = b;
	i++;
	}
	return (s);
}
