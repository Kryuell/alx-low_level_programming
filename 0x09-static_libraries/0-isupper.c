#include "main.h"
#include <stdio.h>
/**
 * _isupper - Entry point
 *
 * @c: for taking param
 * description: the description
 * Return: 1 if param is upper case otherwise 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
