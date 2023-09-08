#include <stdio.h>
/**
 * main - Entry point
 *
 * description: the description
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int di1 = 48;
	int di2;

	while (di1 <= 57)
	{
		di2 = 48;
		while (di2 <= 57)
		{
			if (di1 != di2 && di1 < di2)
			{
				putchar(di1);
				putchar(di2);
				if (di1 + di2 != 113)
				{
					putchar(',');
					putchar(' ');
				}
			}
			di2++;
		}
		di1++;
	}
	putchar('\n');
	return (0);
}
