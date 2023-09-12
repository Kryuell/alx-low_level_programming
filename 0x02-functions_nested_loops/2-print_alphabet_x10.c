#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * description: the description
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char a;

	for (; i < 10; i++)
	{
		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
	}
}
