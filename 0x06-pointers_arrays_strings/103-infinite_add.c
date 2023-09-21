#include "main.h"

/**
 * rev_string - Entry point
 * @n: int params
 * Return: Always 0
 */

void rev_string(char *n)
{
	int x = 0;
	int z = 0;
	char temp;

	while (*(n + x) != '\0')
	{
		x++;
	}
	x--;

	for (z = 0; z < x; z++, x--)
	{
		temp = *(n + z);
		*(n + z) = *(n + x);
		*(n + x) = temp;
	}
}

/**
 * infinite_add - Entry point
 * @n1: char param
 * @n2: char param
 * @r: char param
 * @size_r: int param
 * Return: char
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int over = 0, x = 0, z = 0, di = 0;
	int val1 = 0, val2 = 0, temp_tot = 0;

	while (*(n1 + x) != '\0')
		x++;
	while (*(n2 + z) != '\0')
		z++;
	x--;
	z--;
	if (z >= size_r || x >= size_r)
		return (0);
	while (z >= 0 || x >= 0 || over == 1)
	{
		if (x < 0)
			val1 = 0;
		else
			val1 = *(n1 + x) - '0';
		if (z < 0)
			val2 = 0;
		else
			val2 = *(n2 + z) - '0';
		temp_tot = val1 + val2 + over;
		if (temp_tot >= 10)
			over = 1;
		else
			over = 0;
		if (di >= (size_r - 1))
			return (0);
		*(r + di) = (temp_tot % 10) + '0';
		di++;
		z--;
		x--;
	}
	if (di == size_r)
		return (0);
	*(r + di) = '\0';
	rev_string(r);
	return (r);
}
