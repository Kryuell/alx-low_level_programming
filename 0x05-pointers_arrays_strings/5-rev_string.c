#include "main.h"
/**
 * rev_string - Entry point
 * @s : char param
 * Return : Always 0
 */
void rev_string(char *s)
{
	int n = 0;
	int x = 0;
	char temp;

	while (s[n++])
		x++;
	for (n = (x - 1); n >= x / 2; n--)
	{
		temp = s[n];
		s[n] = s[x - n - 1];
		s[x - n - 1] = temp;
	}
}
