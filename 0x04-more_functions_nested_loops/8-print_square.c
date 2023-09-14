#include "main.h"

/**
 * print_square - check the code
 * description: the description
 * @size: param for int
 * Return: Always 0.
 */
void print_square(int size)
{
	int i, y;

	for (i = 1; i <= size; i++)
	{
		for (y = 1; y <= size; y++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
