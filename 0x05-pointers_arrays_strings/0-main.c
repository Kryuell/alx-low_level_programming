#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    n = 402;
    printf("n=%d\n", n);
    
    reset_to_98(&n); /* Call the function to set n to 98 */

    printf("n=%d\n", n);

    return (0);
}
