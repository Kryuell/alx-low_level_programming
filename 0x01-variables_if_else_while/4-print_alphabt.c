#include <stdio.h>
/**
 * main - Entry point
 *
 * description: printing all alphabet char and void q and e
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	char lower = 'a';

	while (lower <= 'z')
	{
		if (lower == 'e' || lower == 'q')
		{
			lower++;
			continue;
		}
		putchar(lower);
		lower++;
	}
	putchar('\n');
	return (0);
}
