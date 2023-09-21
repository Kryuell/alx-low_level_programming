#include "main.h"
/**
 * rot13 - Entry point
 * @c: char param
 * Return: c
 */
char *rot13(char *c)
{
	char let1[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char let2[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";
	int i, j;

	for (i = 0; c[i] != '\0'; i++)
	{
		j = 0;
		while (let1[j] != '\0')
		{
			if (c[i] == let1[j])
			{
				c[i] = let2[j];
				break;
			}
			j++;
		}
	}
	return (c);
}
