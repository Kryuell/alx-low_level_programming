#include "main.h"

/**
 * print_triangle - check the code
 * @size: param for int
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int i, z;

	for (i = 1; i <= size; i++)
	{
		for (z = 1; z <= size; z++)
		{
			if ((i + z) <= size)
			{
				_putchar(' ');
			}
			else
				_putchar(35);
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
