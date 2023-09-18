#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The input string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
    int length = 0;

    /* Iterate through the string until the null terminator is found */
    while (*s != '\0')
    {
        length++;
        s++; /* Move to the next character in the string */
    }

    return length;
}
