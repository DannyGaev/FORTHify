#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void ceasarCipher(char *els[], int increment)
{
    int size = 0;
    int x = 0;
    while (els[x] != NULL)
    {
        size++;
        x++;
    }
    printf("INCREMENTING BY %d\n",increment);
    x = 1;
    printf("CIPHERED WORD: ");
    for (int i = x; i < size - 1; i++)
    {
        for (int g = 0; g < strlen(els[i]); g++)
        {
            printf("%c", els[i][g] + increment);
        }
        printf(" ");
    }
    printf("\n");
}