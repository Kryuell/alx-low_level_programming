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
	int dig1 = 48;
	int dig2, dig3;

	while (dig1 <= 57)
	{
		dig2 = 48;
		while (dig2 <= 57)
		{
			dig3 = 48;
			while (dig3 <= 57)
			{
				if (dig1 != dig2 && dig1 < dig2 && dig2 != dig3 && dig2 < dig3)
				{
					putchar(dig1);
					putchar(dig2);
					putchar(dig3);
					if (dig1 + dig2 + dig3 != 168)
					{
						putchar(',');
						putchar(' ');
					}
				}
				dig3++;
			}
			dig2++;
		}
		dig1++;
	}
	putchar('\n');
	return (0);
}
