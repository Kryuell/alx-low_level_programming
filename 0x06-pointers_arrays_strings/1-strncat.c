#include "main.h"

/**
 * _strncat - Concatenates two strings, using at most n bytes from src
 * @dest: The destination string
 * @src: The source string to append to dest
 * @n: The maximum number of bytes to use from src
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
    char *dest_end = dest;

    // Move dest_end to the end of dest
    while (*dest_end)
        dest_end++;

    // Append characters from src to dest, up to the first n bytes
    while (*src && n > 0)
    {
        *dest_end++ = *src++;
        n--;
    }

    // Null-terminate the concatenated string
    *dest_end = '\0';

    return dest;
}

