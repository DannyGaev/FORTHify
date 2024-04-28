#include "word_stack.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void word_stack_init(word_stack_t *stk3, int capacity)
{
    SLIST_INIT(&stk3->head3);
    stk3->size = 0;
    stk3->capacity = capacity;
}

int word_stack_push(word_stack_t *stk3, word_entry_t newWord_t)
{
    if (stk3->size >= stk3->capacity)
    {
        printf("Stack is at full capacity.\n");
        return 0; // fail
    }

    word_entry_t *newEntry = malloc(sizeof(word_entry_t));
    if (newEntry)
    {
        newEntry->full_command = newWord_t.full_command;
        newEntry->name = newWord_t.name;
        printf("%s\n", newEntry->full_command);
        SLIST_INSERT_HEAD(&stk3->head3, newEntry, entries3);
        stk3->size++;
        return 1; // success
    }
    return 0; // fail
}

void word_stack_declare(word_stack_t *stk3, char *els[])
{
    int size = 0;
    int x = 1;
    int fullLength = 0;
    word_entry_t newWord;
    newWord.name = els[0];
    while (els[x] != NULL)
    {
        fullLength += strlen(els[x]);
        size++;
        x++;
    }
    char *fullCommand[fullLength];
    x = 0;
    while (x < fullLength)
    {
        fullCommand[x] = els[x + 1];
        x++;
    }
    char space[] = " ";
    char full[100] = "\0";
    for (int i = 0; i < fullLength; i++)
    {
        strcat(full, fullCommand[i]);
        strcat(full, space);
    }
    newWord.full_command = full;
    printf("NEWWORD FULL COMMAND: %s\n", newWord.full_command);
    printf("NEWWORD NAME: %s\n", newWord.name);

    int pushed = word_stack_push(stk3, newWord);
    if (pushed)
    {
        printf("Succesfully declared word: %s\n", newWord.name);
    }
}

void word_stack_print(word_stack_t *stk3, FILE *file)
{
    fprintf(file, "\n\tWORD STACK\n");
    word_entry_t *entry;
    int length = stk3->size;
    if (stk3->size == 0)
    {
        fprintf(file, "empty stack\n");
        return;
    }

    SLIST_FOREACH(entry, &stk3->head3, entries3)
    {
        printf("COMMAND: %s\n", entry->full_command);
        printf("\t|NAME: %s\tFULL COMMAND: %s\n", entry->name, entry->full_command);
    }
}
