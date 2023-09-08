#include <stdio.h>
/**
 * main - Entry point
 *
 * description: the description
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 48;

	while (a <= 102)
	{
		putchar(a);
		if (a == 57)
		{
			a += 39;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
