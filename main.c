
#include <stdlib.h>
#include <string.h>
#include "token.h"
#include "int_stack.h"
#include "general_stack.h"
#include "word_stack.h"
#include "resolveActions.h"

int main(int argc, char *argv[])
{

    const int capacity = 100;
    int_stack_t myIntStack;
    general_stack_t myGenStack;
    word_stack_t myWordStack;
    int_stack_init(&myIntStack, capacity);
    general_stack_init(&myGenStack, capacity);
    word_stack_init(&myWordStack, capacity);

    printf("\nTYPE 'exit' TO EXIT THE PROGRAM\n");

    char input[100];
    char *token_array[100];
    int going = 1;
    while (going)
    {

        printf(": ");
        fgets(input, sizeof(input), stdin);
        generateSpaceless(input, token_array);
        int x = 0;
        while (token_array[x] != NULL)
        {
            if (strcmp(token_array[x], "exit") == 0)
            {
                printf("\nLeaving FORTHify -- stay secure!\n\n");
                going = 0;
                break;
            }
            TOKEN returnToken = parseTokens(token_array[x]);
            const int textLength = strlen(returnToken.text);
            switch (returnToken.type_t)
            {
            case NUM:
            {
                int value = atoi(returnToken.text);

                int success = int_stack_push(&myIntStack, value);
                if (!success)
                {
                    fprintf(stderr, "Stack overflow: %d\n", value);
                }
                break;
            }

            case ARITH_OP:
                resolveArith(returnToken.text, &myIntStack);
                break;
            case WORD:
                resolveWord(returnToken.text, &myIntStack, textLength, token_array);
                break;
            case SYMB:
                resolveSymbol(returnToken.text, &myIntStack, &myWordStack, textLength, token_array);
                break;
            case VAR:
                resolveVariable(returnToken.text, &myGenStack, textLength);
            }
            x++;
        }
        if (going)
        {
            int_stack_print(&myIntStack, stdout);
            word_stack_print(&myWordStack, stdout);
        }
    }
    return EXIT_SUCCESS;
}