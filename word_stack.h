#ifndef WORD_STACK_H
#define WORD_STACK_H

#include <stdio.h>
#include <sys/queue.h>

typedef struct word_t
{
    char *full_command;
    char *name;
} WORD_T;


typedef struct word_entry
{
    // char *value;
    WORD_T word_t;
    SLIST_ENTRY(word_entry) entries;
} word_entry_t; 

typedef struct word_stack
{
    SLIST_HEAD(stackhead3, word_entry) head3;
    int size;
    int capacity;
} word_stack_t;



extern void word_stack_init(word_stack_t *stk, int capacity);
extern void word_stack_declare(word_stack_t *stk, char *els[], char wordName[]);
extern int word_stack_push(word_stack_t *stk, WORD_T word_t);
extern void word_stack_print(word_stack_t *stk, FILE *file);

#endif // WORD_STACK_H 
