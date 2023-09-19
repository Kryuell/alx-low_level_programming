#include "main.h"
/**
 * _strlen - Entry point
 * description: the description
 * @s : char param
 * Return: Always 0 (Succes)
 */
int _strlen(char *s)
{
	int vari;

	for (vari = 0; *s != '\0'; s++)
		vari++;
	return (vari);
}
