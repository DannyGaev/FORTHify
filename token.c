#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "token.h"

void generateSpaceless(char *input, char *token_array[])
{
    char *token;
    char *temp_token;
    int i = 0;
    token = strtok(input, " ");

    while (token != NULL)
    {
        token_array[i] = token;
        token_array[i][strcspn(token_array[i], "\n")] = '\0';
        i++;
        token = strtok(NULL, " ");
    }
}

TOKEN parseTokens(char *token)
{
    const int textLength = strlen(token);
    char text[textLength + 1];
    strncpy(text, token, textLength);
    text[textLength] = '\0';

    TOKEN returnToken;

    if (*token == '+' || *token == '-' || *token == '*' || *token == '/')
        returnToken.type_t = ARITH_OP;

    else if (*token == ':' || *token == ';' || *token == '.' || *token == '>' || *token == '<' || *token == '=')
        returnToken.type_t = SYMB;

    else if (isdigit(*token) != 0)
        returnToken.type_t = NUM;

    else if (strcmp(text, "variable") == 0)
        returnToken.type_t = VAR;

    else
        returnToken.type_t = WORD;

    returnToken.text = token;

    return returnToken;
}

char *resolveToString(enum token_type_t type_t)
{
    if (type_t == WORD)
        return "Word";

    else if (type_t == NUM)
        return "Number";

    else if (type_t == SYMB)
        return "Symbol";

    else if (type_t == ARITH_OP)
        return "Arithmetic Operator";

    else if (type_t == VAR)
        return "Variable";

    return "NULL";
}
