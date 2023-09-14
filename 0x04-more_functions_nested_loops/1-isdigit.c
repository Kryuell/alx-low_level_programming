#include "main.h"
#include <stdio.h>
/**
 * _isdigit - Entry point
 * description: the description
 * @c: take param for func
 * Return: 1 if is digit otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
