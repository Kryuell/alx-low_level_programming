#include "main.h"
#include <stdio.h>
/**
 * _abs - Entry point
 * description: the description
 * @n: parameter for values
 * Return: Always 0 (Success)
 *
 */
int _abs(int n)
{
	if (n < 0)
		n = -1 * n;
	return (n);
}
