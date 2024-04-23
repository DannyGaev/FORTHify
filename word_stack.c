#include "word_stack.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void word_stack_init(word_stack_t *stk, int capacity)
{
    SLIST_INIT(&stk->head3);
    stk->size = 0;
    stk->capacity = capacity; 
}

int word_stack_push(word_stack_t *stk, WORD_T word_t)
{
    if (stk->size >= stk->capacity)
    {
        printf("Stack is at full capacity.\n"); 
        return 0; // fail
    }

    word_entry_t *newEntry = malloc(sizeof(word_entry_t));
    if (newEntry)
    {
        newEntry->word_t.name = word_t.name;
        newEntry->word_t.full_command = word_t.full_command;
        SLIST_INSERT_HEAD(&stk->head3, newEntry, entries);
        stk->size++;
        return 1; // success
    }
    return 0; // fail
}

void word_stack_declare(word_stack_t *stk, char *els[], char wordName[])
{
    int size = 0;
    int x = 0;
    while (els[x] != NULL)
    {
        size++;
        x++;
    }
    printf("SIZE: %d\n", size);
    char *fullCommand[size];
    x = 0;
    while (x < size - 1)
    {
        fullCommand[x] = els[x];
        fullCommand[x][strcspn(fullCommand[x], "\n")] = '\0';
        x++;
    }
    // printf("Now pushing...");
    char space[] = " ";
    char full[20] = "\0";
    for (int i = 0; i < size - 1; i++)
    {
        strcat(full, fullCommand[i]);
        strcat(full, space); 
    }
    WORD_T newWord;
    newWord.full_command = full;
    newWord.name = wordName;

    int pushed = word_stack_push(stk,newWord);
    if(pushed)
    {
        printf("Succesfully declared word: %s\n", wordName);
    }
    
}

void word_stack_print(word_stack_t *stk, FILE *file)
{
    fprintf(file, "\n\tSTACK\n\t|");
    word_entry_t *entry;
    int length = stk->size;
    if (stk->size == 0)
    {
        fprintf(file, "empty stack\n");
        return;
    }

    char *elems = (char *)malloc(length * sizeof(char));

    SLIST_FOREACH(entry, &stk->head3, entries)
    {
        char str[sizeof(entry->word_t.name)+sizeof(entry->word_t.full_command)];
        printf("NAME: %s\tFULL COMMAND: %s\n", entry->word_t.name,entry->word_t.full_command);
        strcat(elems, str);
    }

    char *token = strtok(elems, " \t\n");
    char *tokens[100];
    int count = 0;
    while (token != NULL)
    {
        tokens[count++] = token;
        token = strtok(NULL, " ");
    }

    for (int i = count - 1; i >= 0; i--)
    {
        fprintf(file, "%s ", tokens[i]);
    }
}
