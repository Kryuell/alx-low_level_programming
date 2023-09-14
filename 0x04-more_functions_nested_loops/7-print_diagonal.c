#include "main.h"

/**
 * print_diagonal - check the code
 * description: the description
 * @n: param to take int
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int a, z;

	if (n <= 0)
		_putchar('\n');
	for (a = 0; a < n; a++)
	{
		for (z = 0; z < a; z++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
}
