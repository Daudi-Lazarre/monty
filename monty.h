#ifndef MONTY_H
#define MONTY_H

/* Includes */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>>
#include 

/* MACROS */

#define ERR_PUSH 0
#define ERR_PINT 1
#define ERR_POP 2
#define ERR_SWAP 3
#define ERR_ADD 4

#define ERROR_FOUND 0
#define ERROR_NOT_FOUND 1

/*-------------*/

/* STRUCTS */

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
 * struct instruction_s - opcode and its function
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

/* ------------ */

/* functions */

void print_err_a(int n_error, unsigned int line_number);


/* opcode functions */

void push_function(node_t **head, unsigned int line);
void pall_function(node_t **head, unsigned int line);


#endif
