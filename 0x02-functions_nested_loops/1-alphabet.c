#include "main.h"

/**
 * print_alphabet - Prints the lowercase English alphabet followed by a newline.
 *
 * Description: This function prints the alphabet from 'a' to 'z' in a
 * sequential order and appends a newline character '\n' at the end.
 */
void print_alphabet(void)
{
    char a = 'a';

    while (a <= 'z')
    {
        _putchar(a);
        a++;
    }
    _putchar('\n');
}}
