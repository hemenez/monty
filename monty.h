#ifndef _MONTY_H_
#define _MONTY_H_

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <ctype.h>

extern int op_int;
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcoode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void file_handler (const char *filename);
int main(int argc, char *argv[]);
void pushfxn(stack_t **stack, unsigned int line_number);
void pallfxn(stack_t **stack, unsigned int line_number);
void pintfxn(stack_t **stack, unsigned int line_number);
int tokenloop(char *token, unsigned int line_number, stack_t **stack);
void popfxn(stack_t **stack, unsigned int line_number);
void free_nodes(stack_t **stack);

#endif
