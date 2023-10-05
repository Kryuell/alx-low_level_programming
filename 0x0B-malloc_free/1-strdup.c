
i#include "main.h"
/**
 * *_strdup - Entry point
 * @str: param of char
 * Return: char
*/
char *_strdup(char *str)
{
	char *newText;
	int i;
	int x = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		x++;

	newText = malloc(sizeof(char) * (x + 1));

	if (newText == NULL)
		return (NULL);
