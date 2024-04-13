#include "general_stack.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void general_stack_init(general_stack_t *stk, int capacity)
{
    SLIST_INIT(&stk->head2);
    stk->size = 0;
    stk->capacity = capacity;
}

int general_stack_push(general_stack_t *stk, char *value)
{
    if (stk->size >= stk->capacity)
    {
        printf("Stack is at full capacity.\n");
        return 0; // fail
    }

    general_entry_t *newEntry = malloc(sizeof(general_entry_t));
    if (newEntry)
    {
        newEntry->value = value;
        SLIST_INSERT_HEAD(&stk->head2, newEntry, entries);
        stk->size++;
        return 1; // success
    }
    return 0; // fail
}

int general_stack_pop(general_stack_t *stk, char *top_value)
{
    general_entry_t *entry = SLIST_FIRST(&stk->head2);
    if (entry)
    {
        char *value = entry->value;
        SLIST_REMOVE_HEAD(&stk->head2, entries);
        free(entry);
        stk->size--;
        top_value = value;
        return 1; // success
    }
    return 0; // fail
}

void general_stack_declare_variable(general_stack_t *stk)
{
    general_stack_push(stk, "variable");
}

void general_stack_word(general_stack_t *stk, char *els[], char wordName[])
{
    // int size= sizeof(&els) / sizeof(&els[0]);
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
    // char *full = (char *)malloc(size + 1);
    // full[0] = '\0'; // Ensure the string is initially empty
    // for (int i = 0; i < size; i++)
    // {
    //     strcat(full, fullCommand[i]);
    // }
    // general_stack_push(stk, full);
    printf("Succesfully declared word: %s\n", wordName);
}
