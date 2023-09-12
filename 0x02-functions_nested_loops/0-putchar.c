#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char name[] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(name[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
