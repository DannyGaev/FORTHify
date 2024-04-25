#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

void ceasarCipher(char *els[], int increment)
{
    int size = 0;
    int x = 0;
    while (els[x] != NULL)
    {
        size++;
        x++;
    }
    printf("INCREMENTING BY %d\n", increment);
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

void transpoCipher(char *els[], char *keyWord)
{
    int length = strlen(keyWord);
    char letters[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int pos[length];
    int size = 0;
    int x = 1;
    int fullLength = 0;
    while (els[x] != NULL)
    {
        size++;
        fullLength += strlen(els[x]);
        x++;
    }

    for (size_t i = 0; i < length; i++)
    {
        keyWord[i] = tolower(keyWord[i]);
    }

    int y = 0;
    while (y < length)
    {
        for (int i = 0; i < sizeof(letters); i++)
        {
            if (keyWord[y] == letters[i])
            {
                pos[y] = i;
            }
        }
        y++;
    }

    int maxCols = length;
    int maxItems = (fullLength + (length - 1)) / length;
    char encrypted_message[maxCols][maxItems];
    for (int i = 0; i < maxCols; ++i)
    {
        for (int j = 0; j < maxItems; ++j)
        {
            encrypted_message[i][j] = ' ';
        }
    }

    int z = 0;
    int inc = 0;
    int leftover = 0;
    int col = 0;
    int row = 0;
    while (z < size)
    {
        while (inc < strlen(els[z + 1]))
        {
            if (inc - (length - leftover) == 0 && inc != 0)
            {
                leftover = strlen(els[z + 1]) - inc;
                col = 0;
                row += 1;
            }
            encrypted_message[col][row] = els[z + 1][inc];
            col++;
            inc++;
        }
        inc = 0;
        z++;
    }

    printf("ENCRYPTED MESSAGE: ");
    int posInc = 0;
    while (posInc < length)
    {
        int smallestIndex = 0;
        int oldSmallest = smallestIndex;
        for (int g = 0; g < length; g++)
        {
            if (pos[g] < pos[smallestIndex])
                smallestIndex = g;
        }
        pos[smallestIndex] = 9999;
        int e = 0;
        while (e < maxItems)
        {
            if (encrypted_message[smallestIndex][e] != ' ')
            {
                printf("%c", encrypted_message[smallestIndex][e]);
            }
            e++;
        }
        posInc++;
    }
}