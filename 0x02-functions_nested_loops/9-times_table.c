#include "main.h"
#include <stdio.h>
/**
 * times_table - entry point
 *
 * description: the description
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int x;
	int y, z;

	for (x = 0; x <= 9; x++)
	{
		_putchar(48);
		for (y = 1; y <= 9; y++)
		{
			_putchar(',');
			_putchar(' ');
			z = x * y;
			if (z <= 9)
				_putchar(' ');
			else
				_putchar((z / 10) + 48);
			_putchar((z % 10) + 48);
		}
		_putchar('\n');
	}

}
