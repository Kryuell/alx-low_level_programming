#include <stdio.h>

void print_buffer(char *b, int size)
{
    if (size <= 0)
    {
        printf("\n");
        return;
    }

    int i, j;
    for (i = 0; i < size; i += 10)
    {
        printf("%08x: ", i);

        for (j = 0; j < 10; j++)
        {
            if (j % 2 == 0)
                printf("%02x", b[i + j]);
            else
                printf("%02x ", b[i + j]);
        }

        printf(" ");
        
        for (j = 0; j < 10; j++)
        {
            char c = b[i + j];
            if (j % 2 == 0)
            {
                if (c >= 32 && c <= 126)
                    printf("%c", c);
                else
                    printf(".");
            }
            else
            {
                if (c >= 32 && c <= 126)
                    printf("%c ", c);
                else
                    printf(". ");
            }
        }

        printf("\n");
    }

