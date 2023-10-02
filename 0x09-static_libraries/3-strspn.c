#include "main.h"
/**
 * _strspn - Entry point
 * @s: pointer of s
 * @accept: pointer of f
 * Return: 0 Always
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int num = 0;
	int i;

	while (*s)
	{
	for (i = 0; accept[i]; i++)
	{
		if (*s == accept[i])
		{
		num++;
		break;
		}
	else if (accept[i + 1] == '\0')
		return (num);
	}
	s++;
	}
	return (num);
}
