#ifndef WORD_STACK_H
#define WORD_STACK_H

#include <stdio.h>
#include <sys/queue.h>

typedef struct word_entry
{
    char *full_command;
    char *name;
    SLIST_ENTRY(word_entry)
    entries3;
} word_entry_t;

typedef struct word_stack
{
    SLIST_HEAD(stackhead3, word_entry)
    head3;
    int size;
    int capacity;
} word_stack_t;

extern void word_stack_init(word_stack_t *stk, int capacity);
extern void word_stack_declare(word_stack_t *stk, char *els[]);
extern int word_stack_push(word_stack_t *stk, word_entry_t word_t);
extern void word_stack_print(word_stack_t *stk, FILE *file);

#endif // WORD_STACK_H
