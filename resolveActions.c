#include "int_stack.h"
#include "general_stack.h"
#include "word_stack.h"
#include "token.h"
#include "enc_ciph.h"
#include <string.h>
#include <stdlib.h>

void resolveArith(char *answer, int_stack_t *mis)
{
    switch (*answer)
    {
    case '+':
        int_stack_add(mis);
        break;
    case '-':;
        int_stack_subtract(mis);
        break;
    case '*':
        int_stack_multiply(mis);
        break;
    case '/':
        int_stack_divide(mis);
        break;
    }
}

void resolveWord(char *answer, int_stack_t *mis, int textLength, char *token_array[])
{

    char text[textLength + 1];
    strncpy(text, answer, textLength);
    text[textLength] = '\0';
    if (strcmp(text, "rot") == 0)
    {
        int_stack_rot(mis);
    }
    else if (strcmp(text, "dup") == 0)
    {
        int_stack_dup(mis);
    }
    else if (strcmp(text, "swap") == 0)
    {
        int_stack_swap(mis);
    }
    else if (strcmp(text, "drop") == 0)
    {
        int_stack_drop(mis);
    }
    else if (strcmp(text, "over") == 0)
    {
        int_stack_over(mis);
    }
    else if (strcmp(text, "ceasar") == 0)
    {
        char *els[20];
        if (token_array[1] == NULL)
        {
            printf("?");
        }
        else
        {
            int x = 1;
            char wordName[strlen(token_array[x])];
            strncpy(wordName, token_array[x], strlen(token_array[x]));
            while (strcmp(token_array[x], ";") != 0)
            {
                els[x - 1] = token_array[x];
                token_array[x] = NULL;
                els[x - 1][strcspn(els[x - 1], "\n")] = '\0';
                x++;
            }
            els[x] = NULL;
            int increment = atoi(&els[0][0]);
            ceasarCipher(els, increment);
        }
    }
    else if (strcmp(text, "t") == 0)
    {
        char *els[20];
        if (token_array[1] == NULL)
        {
            printf("?");
        }
        else
        {
            int x = 1;
            char wordName[strlen(token_array[x])];
            strncpy(wordName, token_array[x], strlen(token_array[x]));
            while (strcmp(token_array[x], ";") != 0)
            {
                els[x - 1] = token_array[x];
                token_array[x] = NULL;
                els[x - 1][strcspn(els[x - 1], "\n")] = '\0';
                x++;
            }
            els[x - 1] = NULL;
            transpoCipher(els, els[0]);
        }
    }
    else if (strcmp(text, "exit") == 0)
    {
        exit(0);
    }
}

void resolveVariable(char *answer, general_stack_t *mgs, int textLength)
{
    char text[textLength + 1];
    strncpy(text, answer, textLength);
    text[textLength - 1] = '\0';
    printf("Declared a variable!");
    if (strcmp(text, "variable") == 0)
    {
        general_stack_declare_variable(mgs);
    }
}

void resolveSymbol(char *answer, int_stack_t *mis, word_stack_t *mws, int textLength, char *token_array[])
{
    switch (*answer)
    {
    case '.':
    {
        int top_value;
        int_stack_pop(mis, &top_value);
        break;
    }
    case '<':
        int_stack_less_than(mis);
        break;
    case '>':
        int_stack_greater_than(mis);
        break;
    case '=':
        int_stack_equals(mis);
        break;
    case ':':
    {
        char *els[20];
        if (token_array[1] == NULL)
        {
            printf("?");
        }
        else
        {
            int x = 2;
            char wordName[strlen(token_array[x - 1])];
            strncpy(wordName, token_array[x - 1], strlen(token_array[x - 1]));
            while (strcmp(token_array[x], ";") != 0)
            {
                printf("DECLARATIONS => %s\n", token_array[x]);
                els[x - 2] = token_array[x];
                token_array[x] = NULL;
                els[x - 2][strcspn(els[x - 2], "\n")] = '\0';
                x++;
            }
            els[x - 1] = NULL;
            word_stack_declare(mws, els, wordName);
            break;
        }
    }
    }
}