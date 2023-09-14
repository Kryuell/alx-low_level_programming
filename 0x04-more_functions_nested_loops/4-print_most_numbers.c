#include "main.h"

/**
 * print_most_numbers - Entry point
 * description: the description
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int i = 48;

	for (; i <= 57; i++)
	{
		if (i == 50 || i == 52)
			continue;
		_putchar(i);
	}
	_putchar('\n');
}
