#include "main.h"
/**
 * puts2 - Entry point
 * @str: char param
 * Return: Always 0
 */
void puts2(char *str)
{
	int s = 0;
	int j = 0;

	while (str[s++])
		j++;
	for (s = 0; s < j; s += 2)
		putchar(str[s]);
	putchar('\n');

}
