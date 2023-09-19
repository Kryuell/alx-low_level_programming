#include "main.h"
/**
 * print_rev - Entry point
 * @s: char param
 * Return: void
 */
void print_rev(char *s)
{
	int x = 0;
	int n = 0;

	while (s[x])
		x++;
	for (n = (x - 1); n >= 0; n--)
		putchar(s[n]);
	putchar('\n');
}
